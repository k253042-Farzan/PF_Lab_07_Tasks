#include<stdio.h>
int main()
{
    char str[100], count=0;
    printf("Enter a string: ");
    scanf("%99[^\n]", str);
    for(int i=0;str[i] != '\0';i++){
        if(str[i]==' ' || str[i]=='\t' || str[i]=='\n'){
            count++;
        }
    }
    printf("Number of whitespaces: %d", count);
    return 0;
}