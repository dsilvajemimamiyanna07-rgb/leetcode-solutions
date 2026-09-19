#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) return false;
    
    int count[26] = {0};
    
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return false;
    }
    
    return true;
}

int main() {
    // Test Case 1: Typical case (Valid Anagram)
    char s1[] = "anagram";
    char t1[] = "nagaram";
    printf("Test Case 1 Output: %s (Expected: true)\n", isAnagram(s1, t1) ? "true" : "false");

    // Test Case 2: Edge case (Different lengths / Invalid)
    char s2[] = "rat";
    char t2[] = "car";
    printf("Test Case 2 Output: %s (Expected: false)\n", isAnagram(s2, t2) ? "true" : "false");

    return 0;
}