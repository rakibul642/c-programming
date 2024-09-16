#include <stdio.h>

int main() {
    int arr[10], size, i, pos, element;

    printf("Enter the size of the array (max 100): ");
    scanf("%d", &size);

    if (size <= 0 || size > 10) {
        printf("Invalid array size\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position at which you want to insert the element: ");
    scanf("%d", &pos);

    if (pos < 0 || pos > size) {
        printf("Invalid position\n");
        return 1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right to make space for the new element
    for (i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element; // Insert the element

    size++; // Increase the size of the array

    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
