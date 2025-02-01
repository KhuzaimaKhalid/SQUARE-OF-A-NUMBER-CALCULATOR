#include<stdio.h>
int square(int n);

int main()
{
	printf("\t SQUARE OF A NUMBER CALCULATOR \n");
    int n;
	printf("\nenter an integer:");
	scanf("%d", &n);
	printf("the square of a number is %d", square(n));
	
	
	
	return 0;
}
int square(int n){
	return n * n;
}
