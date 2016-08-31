#include <stdio.h>


int encode(char c) {
    switch (c) {
        case '+': return 1;
        case ',': return 2;
        case '-': return 3;
        case '.': return 4;
        case '<': return 5;
        case '>': return 6;
        case '[': return 7;
        case ']': return 8;
    }
    return 0;
}


int main(void) {
    for (char c; (c = fgetc(stdin)) != EOF; ) {
        if (c == '#') {
            while (fgetc(stdin) != '\n') {}
            continue;
        }
        int code = encode(c);
        if (code != 0) {
            fputs(">>", stdout);
            while (code-- != 0)
                putc('+', stdout);
        }
    }
    
    return 0;
}
