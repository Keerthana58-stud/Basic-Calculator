#include <stdio.h>

int BasicCalci(int a, int b, int op);

void main() {
    int a, b;
    int op;
    printf("Enter the operands\n");
    scanf("%d%d", &a, &b);
    printf("Enter the operator\n1-'+'\n2-'-'\n3-'*'\n4-'/'\n5-'%'\n");
    scanf("%d", &op);
    int result = BasicCalci(a, b, op);
    printf("Result: %d\n", result);
}

int BasicCalci(int a, int b, int op) {
    switch(op) {
        case 1:
            return a + b;
        case 2:
            return a - b;
        case 3:
            return a * b;
        case 4:
            return a / b;
        case 5:
            return a % b;
        default:
            printf("Invalid operator\n");
            return -1; // Return an error code for invalid operator
    }
}

