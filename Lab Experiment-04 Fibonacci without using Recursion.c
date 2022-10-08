#include<stdio.h>
int main(){
	int a = -1,b = 1,fib,n,i;
	printf("Enter the Limit : ");
	scanf("%d",&n);
	printf("The Fibonacci Series is : \n");
	fib = a + b;
	for(i = 0;i<n;i++){
		printf("%d\t",fib);
		a = b;
		b = fib;
		fib = a + b;
	}
	return 0; 
}
