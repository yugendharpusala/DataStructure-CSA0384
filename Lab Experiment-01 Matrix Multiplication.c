#include<stdio.h>
int main(){
	int a[10][10],b[10][10],mul[10][10],i,j,k,rows,cols;
	printf("Enter the Number of Rows : ");
	scanf("%d",&rows);
	printf("Enter The Number of Columns : ");
	scanf("%d",&cols);
	printf("Enter the Elements of First Matrix : \n");
	for(i = 0;i <rows;i++){
		for(j = 0;j<cols;j++){
			printf("Enter : ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the Elements of Second Matrix : \n");
	for(i = 0;i <rows;i++){
		for(j = 0;j<cols;j++){
			printf("Enter : ");
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	for(i = 0;i <rows;i++){
		for(j = 0;j<cols;j++){
			mul[i][j] = 0;
			for(k = 0;k < cols;k++){
				mul[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	printf("The Multiplication Matrix is : \n");
	for(i = 0;i < rows;i++){
		for(j = 0;j<cols;j++){
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
