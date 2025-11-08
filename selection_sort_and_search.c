#include <stdio.h>

int main() {
    int arr[20], n, i, j, temp, target, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Selection Sort
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Search for target
    printf("\n\nEnter target element to search: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            printf("Element %d found at position %d\n", target, i + 1);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Element not found.\n");

    return 0;
}
