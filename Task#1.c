#include<stdio.h>
int main()
{
	int num[9]={1,2,3,4,5,6,7,8,9};
	int sum=0, i;
	for(i=0;i<9;i++){
		sum= sum + num[i];
	}
	printf("Sum: %d", sum);
}
