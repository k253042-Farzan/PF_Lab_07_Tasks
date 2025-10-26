#include<stdio.h>
int main()
{
    char str[100], j=0;
    printf("Enter a string: ");
    scanf("%99[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (!(str[i] >= '0' && str[i] <= '9'))  
            str[j++] = str[i];
    }
    str[j] = '\0';  
    printf("String without digits: %s\n", str);
    return 0;
}