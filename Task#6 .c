#include<stdio.h>
int main()
{
    int n1[5], n2[5], n3[10];
    for(int i=0;i<5;i++){
        printf("Enter element %d of Array 1: ", i+1);
        scanf("%d", &n1[i]);
    }
    printf("\n");
    for(int j=0;j<5;j++){
        printf("Enter element %d of Array 2: ", j+1);
        scanf("%d", &n2[j]);
    }
    for(int k=0;k<10;k++){
        if(k<5){
            n3[k]=n1[k];
        }
        else{
            n3[k]=n2[k-5];
        }
    }
    printf("Elements of Array 3: { ");
    for(int a=0;a<10;a++){
        printf("%d, ", n3[a]);
    }
    printf("}");
    return 0;
}