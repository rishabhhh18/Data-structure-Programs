#include <stdio.h>
int main() {
int arr[100] = {10, 20, 30, 40, 50};
int key;
printf("Enter number to search: ");
scanf("%d", &key);
for(int i=0; i<5; i++) {
    if(arr[i] == key) {
        printf("found at position %d\n", i);
        return 0;
    }
}
printf("not found\n");
return 0;
}