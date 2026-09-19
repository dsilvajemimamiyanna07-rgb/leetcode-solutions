#include <stdio.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    // Test Case 1: Standard string
    char str1[] = {'h', 'e', 'l', 'l', 'o'};
    reverseString(str1, 5);
    printf("Test Case 1 Output: ");
    for(int i = 0; i < 5; i++) printf("%c", str1[i]);
    printf(" (Expected: olleh)\n");

    // Test Case 2: Edge case (single character)
    char str2[] = {'A'};
    reverseString(str2, 1);
    printf("Test Case 2 Output: %c (Expected: A)\n", str2[0]);

    return 0;
}