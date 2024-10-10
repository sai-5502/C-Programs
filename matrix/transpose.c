#include <stdio.h>
#define ROWS 3
#define COLUMNS 3

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void main(){
	int a[ROWS][COLUMNS]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j,temp,k;
	printf("the given matrix is \n");
	for  (i=0;i<ROWS;i++){
		for (j=0;j<COLUMNS;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}

	for  (i=0;i<ROWS-1;i++){
		for (j=i+1;j<COLUMNS;j++){
			swap(&a[i][j],&a[j][i]);
		}
	}

	printf("the transpose of the given matrix is \n");
	for  (i=0;i<ROWS;i++){
		for (j=0;j<COLUMNS;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
