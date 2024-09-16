#include <stdio.h>

// linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Function to perform a binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;


        if (arr[mid] == target) {
            return mid;
        }


        if (arr[mid] < target) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int unsortedIDs[] = {103, 15, 7, 25, 99, 56, 43, 2, 65};
    int sortedIDs[] = {2, 7, 15, 25, 43, 56, 65, 99, 103};

    int sizeUnsorted = sizeof(unsortedIDs) / sizeof(unsortedIDs[0]);
    int sizeSorted = sizeof(sortedIDs) / sizeof(sortedIDs[0]);


    int idToFind = 25;
    int result = linearSearch(unsortedIDs, sizeUnsorted, idToFind);
    printf("Linear Search: ID %d is at index %d\n", idToFind, result);

    idToFind = 100;
    result = linearSearch(unsortedIDs, sizeUnsorted, idToFind);
    printf("Linear Search: ID %d is at index %d\n", idToFind, result);

    //binary search
    idToFind = 56;
    result = binarySearch(sortedIDs, sizeSorted, idToFind);
    printf("Binary Search: ID %d is at index %d\n", idToFind, result);

    idToFind = 101;
    result = binarySearch(sortedIDs, sizeSorted, idToFind);
    printf("Binary Search: ID %d is at index %d\n", idToFind, result);

    return 0;
}
