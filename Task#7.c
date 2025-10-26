#include<stdio.h>
int main() {
    int arr[10], key, i;
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number to search: ");
    scanf("%d", &key);
    for (i = 0; i < 10; i++) {
        if (arr[i] == key) {
            printf("Number %d found at index %d.\n", key, i);
            return 0; 
        }
    }
    printf("Number %d not found.\n", key);
    return -1;
}