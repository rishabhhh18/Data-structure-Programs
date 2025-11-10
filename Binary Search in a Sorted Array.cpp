
#include <stdio.h>
int main() {
int arr[100] = {10, 20, 30, 40, 50};
int key;
printf("Enter number to search: ");
scanf("%d", &key);
int low = 0;
int high = 4;
while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == key) {
        printf("found at position %d\n", mid);
        return 0;
    }
    else if (arr[mid] < key) {
        low = mid + 1;
    }
    else {
        high = mid - 1;
    }
}
printf("not found\n");
return 0;
}
