#include <stdio.h>

#define N 5

void main(){
	int a[N][N]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
	int i,j;

	printf("the given matrix is\n");
	for (i=0;i<N;i++){
		for (j=0;j<N;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for (i=0;i<N;i++){
		for (j=0;j<N;j++){
			if (i == j)
				a[i][j]=1;
			else
				a[i][j]=0;
		}
	}

	printf("the identity matrix for the given matrix is\n");
	for (i=0;i<N;i++){
		for (j=0;j<N;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
