# Expression Evaluator

This program demonstrates how to create and evaluate arithmetic expressions using a tree structure. 
The code is written in C and provides a simple example of building an expression tree with addition, subtraction, multiplication, and division operations. The expressions are evaluated using dynamic programming techniques.

## Development Environment

- IDE: Code::Blocks
- Programming Language: C
- Compiler: GCC (GNU Compiler Collection)
- Operating System: Windows (Code::Blocks used for development)

## Setup

1. Install Code::Blocks:
   - Download and install Code::Blocks from the official website: [Code::Blocks Download](http://www.codeblocks.org/downloads).

2. Open Code::Blocks:
   - Launch Code::Blocks after installation.
   - Create a new project or open an existing one, depending on your preference.

3. Add Source Code:
   - In the Code::Blocks environment, create a new source code file (e.g., `expression_evaluator.c`).
   - Copy and paste the provided C code into this file.

4. Save the Source Code:
   - Save the source code file with a `.c` extension.

## Compilation and Execution

1. Compile:
   - Go to `Build` > `Build` from the menu to compile the source code.
   - Successful compilation will be indicated in the "Build Log" section at the bottom.

2. Run the Program:
   - After compilation, find the compiled executable in the project's output directory.
   - Look for a folder named `bin` or `Debug`/`Release` depending on your settings.
   - Run the `expression_evaluator` executable to display the evaluated expressions.



The C code exemplifies the creation and evaluation of arithmetic expressions using a tree-like structure. 
The code starts by introducing the `TypeTag` enum, which categorizes various types of nodes that will constitute the expression tree.
 These types include `CONSTANT`, `ADD`, `SUBTRACT`, `MULTIPLY`, and `DIVIDE`. Each type corresponds to a specific arithmetic operation.

The foundation of the code is the `Node` structure. Each `Node` holds vital information: 
its type, a value (for constants), and pointers to its left and right child nodes. The `Node` structure forms the building blocks of 
the expression tree, with each node representing an operation or a constant value. The `makeNode` function is designed to create
 these nodes, initializing them with the appropriate type, value, and child node pointers.

To facilitate arithmetic operations, the code includes functions like `add`, `subtract`, `multiply`, and `divide`. These 
functions take two integers as input and return the result of their respective operation. These operation functions are organized 
in the `operationFunctions` array, indexed based on their corresponding `TypeTag` values. This allows for a convenient lookup mechanism
when evaluating the tree.

The `evaluate` function is the core of the expression evaluation process. 
It takes a node of the expression tree as input and recursively computes the final result.
 If the node's type is `CONSTANT`, the function directly returns the constant's value. For operation nodes, the appropriate operation 
function is retrieved from the `operationFunctions` array. The `evaluate` function then recursively evaluates the left and right child
nodes to perform the computation.

The `calc` function combines the evaluation process with printing. It invokes the `evaluate` function on a given expression node 
And displays the result alongside the provided expression name. In the `main` function, the code constructs expression trees by 
creating nodes using the `makeNode` function. Subsequently, the `calc` function is called for each expression to calculate and 
print their results.



