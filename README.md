A nontrivial Brainfuck quine. The code in quine.bf reads some encoded Brainfuck code from memory, prints out a sequence of instructions that loads the code into memory, and then prints out the code itself. The encoder program takes in some Brainfuck code and prints out the sequence of instructions to load it into memory. We run quine.bf through this, and then combine the output with quine.bf.