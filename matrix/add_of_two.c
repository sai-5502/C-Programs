#include <stdio.h>

void main(){
	int a[10][10],b[10][10],c[10][10];
	int i,j,rows,columns;
	printf("enter the rows:");
	scanf("%d",&rows);
	printf("enter the columns:");
	scanf("%d",&columns);

	printf("the elements of 'A' matrix are\n");
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++)
			scanf("%d",&a[i][j]);
	}
	
	printf("the 'A' matrix is\n");
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}

	printf("the elements of 'B' matrix are\n");
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++)
			scanf("%d",&b[i][j]);
	}
	
	printf("the 'B' matrix is\n");
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}

	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}

	printf("the addition of the two matrices are\n");
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
}
