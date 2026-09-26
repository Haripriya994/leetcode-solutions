#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char* strs[], int strsSize) {
    static char prefix[1000];

    if (strsSize == 0) {
        prefix[0] = '\0';
        return prefix;
    }

    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (prefix[j] != '\0' &&
               strs[i][j] != '\0' &&
               prefix[j] == strs[i][j]) {
            j++;
        }

        prefix[j] = '\0';

        if (prefix[0] == '\0') {
            return prefix;
        }
    }

    return prefix;
}

int main() {
    char* strs[] = {"flower", "flow", "flight"};
    int size = 3;

    printf("Longest common prefix: %s\n",
           longestCommonPrefix(strs, size));

    return 0;
}