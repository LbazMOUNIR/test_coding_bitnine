#include <stdio.h>
#include <stdlib.h>

typedef enum TypeTag {
    CONSTANT,
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
} TypeTag;

typedef struct Node {
    TypeTag type;
    int value;
    struct Node* left;
    struct Node* right;
} Node;

typedef int (*OperationFunc)(int, int);

// Operation functions for arithmetic operations
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

// Array of operation functions
OperationFunc operationFunctions[] = { NULL, add, subtract, multiply, divide };

// Create a new node
Node* makeNode(TypeTag type, int value, Node* left, Node* right) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->type = type;
    node->value = value;
    node->left = left;
    node->right = right;
    return node;
}

// Evaluate an expression recursively
int evaluate(Node* expression) {
    if (expression->type == CONSTANT) {
        return expression->value;
    } else {
        OperationFunc operation = operationFunctions[expression->type];
        int leftValue = evaluate(expression->left);
        int rightValue = evaluate(expression->right);
        return operation(leftValue, rightValue);
    }
}

// Calculate and print the result of an expression
void calc(Node* expression, const char* expressionName) {
    int result = evaluate(expression);
    printf("%s : %d\n", expressionName, result);
}

int main() {
    // Construct the expression tree
    Node* add = makeNode(ADD, 0, makeNode(CONSTANT, 10, NULL, NULL), makeNode(CONSTANT, 6, NULL, NULL));
    Node* mul = makeNode(MULTIPLY, 0, makeNode(CONSTANT, 5, NULL, NULL), makeNode(CONSTANT, 4, NULL, NULL));
    Node* sub = makeNode(SUBTRACT, 0, mul, add);
    Node* fibo = makeNode(SUBTRACT, 0, sub, NULL);

    // Calculate and print the results
    calc(add, "add");
    calc(mul, "mul");
    calc(sub, "sub");
    calc(fibo, "fibo");

    // Free memory
    free(add);
    free(mul);
    free(sub);
    free(fibo);

    return 0;
}
