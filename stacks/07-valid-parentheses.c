#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool isValid(char* s) {
    int len = strlen(s);
    char* stack = (char*)malloc(len * sizeof(char));
    int top = -1;
    
    for (int i = 0; i < len; i++) {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else {
            if (top == -1) {
                free(stack);
                return false;
            }
            char topChar = stack[top--];
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                free(stack);
                return false;
            }
        }
    }
    
    bool result = (top == -1);
    free(stack);
    return result;
}

int main() {
    // Test Case 1: Valid parentheses
    char s1[] = "()[]{}";
    printf("Test Case 1 Output: %s (Expected: true)\n", isValid(s1) ? "true" : "false");

    // Test Case 2: Invalid sequence
    char s2[] = "(]";
    printf("Test Case 2 Output: %s (Expected: false)\n", isValid(s2) ? "true" : "false");

    return 0;
}