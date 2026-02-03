#include <stdio.h>

int main() {
    int n, k;
    int comparisons = 0;

    // Read array size
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read key to search
    scanf("%d", &k);

    // Linear Search
    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) {
            printf("Found at index %d\n", i);
            printf("Comparisons = %d\n", comparisons);
            return 0;
        }
    }

    // If key not found
    printf("Not Found\n");
    printf("Comparisons = %d\n", comparisons);

    return 0;
}
