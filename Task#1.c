#include<stdio.h>
int main()
{
	int num[10];
	int sum=0, i, j;
	for(j=0;j<10;j++){
	    printf("Enter Element %d: ", j+1);
	    scanf("%d", &num[j]);
	}
	for(i=0;i<j;i++){
		sum= sum + num[i];
	}
	printf("Sum: %d", sum);
	return 0;
}

