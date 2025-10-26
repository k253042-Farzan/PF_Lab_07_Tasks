#include <stdio.h>
int main() {
    int n, i, arr[100];
    
    printf("Enter array size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
         printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int freq[100] = {0}; 
    for (i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    printf("Numbers occurring more than once: ");
    int found = 0;
    for (i = 0; i < n; i++) {
        if (freq[i] > 1) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found)
        printf("None");
    printf("\n");
    return 0;
}
