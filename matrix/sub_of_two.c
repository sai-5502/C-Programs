#include <stdio.h>
#define ROWS 2
#define COLUMNS 3

void main(){
	int a[ROWS][COLUMNS]={{3,2,1},{2,1,0}};
	int b[ROWS][COLUMNS]={{1,1,1},{2,2,2}};
	int c[ROWS][COLUMNS],i,j;

	printf("the A  matrix is\n");
	for (i=0;i<ROWS;i++){
		for (j=0;j<COLUMNS;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("the B matrix is\n");
	for (i=0;i<ROWS;i++){
		for (j=0;j<COLUMNS;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	for (i=0;i<ROWS;i++){
		for (j=0;j<COLUMNS;j++){
			c[i][j]=a[i][j]-b[i][j];
		}
	}

	printf("the subtraction of the two matrices is\n");
	for (i=0;i<ROWS;i++){
		for (j=0;j<COLUMNS;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
	
