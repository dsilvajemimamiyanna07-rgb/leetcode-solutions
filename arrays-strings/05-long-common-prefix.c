#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    
    // Allocate memory for the output prefix string
    char* prefix = malloc((strlen(strs[0]) + 1) * sizeof(char));
    strcpy(prefix, strs[0]);
    
    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] != '\0' && strs[i][j] != '\0' && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0';
    }
    
    return prefix;
}

int main() {
    // Test Case 1
    char* strs1[] = {"flower", "flow", "flight"};
    char* res1 = longestCommonPrefix(strs1, 3);
    printf("Test Case 1 Output: \"%s\" (Expected: \"fl\")\n", res1);
    free(res1);

    // Test Case 2
    char* strs2[] = {"dog", "racecar", "car"};
    char* res2 = longestCommonPrefix(strs2, 3);
    printf("Test Case 2 Output: \"%s\" (Expected: \"\")\n", res2);
    free(res2);

    return 0;
}