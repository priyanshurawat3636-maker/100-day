/*Q65 (Arrays (1D))
Search in a sorted array using binary search.*/
#include <stdio.h>
int main() {
    
    int n, key, i, low, high, mid, found = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of the sorted array: ");
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = mid; 
            break;
        } else if (arr[mid] < key) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");

    return 0;
}