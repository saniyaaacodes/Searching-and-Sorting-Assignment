#include <stdio.h>

int main() {
    int arr[20], n, i, target, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
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
