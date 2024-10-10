#include <stdio.h>

#define N 3

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void main(){
	int a[N][N]={{1,2,3},{4,5,6},{7,8,9}};
	
	int i,j,l,m;

	printf("the given matrix is\n");
	for (i=0;i<N;i++){
		for (j=0;j<N;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for (i=0;i<N-1;i++){
		for (j=i+1;j<N;j++){
			swap(&a[i][j],&a[j][i]);
		}
	}

	for (i=0;i<N;i++){
		l=0;
		m=N-1;
		while (l < m){
			swap(&a[i][l],&a[i][m]);
			l++;
			m--;
		}
	}

	
	printf("the 90 degrees of the given matrix is\n");
	for (i=0;i<N;i++){
		for (j=0;j<N;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
