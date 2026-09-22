#include <stdio.h>

int main() {
    int nums[] = {3, 2, 4};
int target = 6;
    int n = 4;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (nums[i] + nums[j] == target) {
                printf("Indices: [%d, %d]\n", i, j);
                return 0;
            }
        }
    }

    printf("No solution found\n");

    return 0;
}