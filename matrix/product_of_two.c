#include <stdio.h>

void main(){
	int a[10][10],b[10][10],c[10][10],i,j,k,sum,m,n,p,q;
	printf("enter the rows of A matrix:");
	scanf("%d",&m);
	printf("enter the columns of A matrix:");
	scanf("%d",&n);
	printf("enter the rows of B matrix:");
	scanf("%d",&p);
	printf("enter the columns of B matrix:");
	scanf("%d",&q);

	printf("the elements of the A matrix are\n");
	for (i=0;i<m;i++){
		for (j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	printf("the A matrix is\n");
	for (i=0;i<m;i++){
		for (j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}

	printf("the elements of the B matrix are\n");
	for (i=0;i<p;i++){
		for (j=0;j<q;j++)
			scanf("%d",&b[i][j]);
	}
	printf("the B matrix is\n");
	for (i=0;i<p;i++){
		for (j=0;j<q;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}

	if (n == p){
		for (i=0;i<m;i++){
			for (j=0;j<q;j++){
				sum=0;
				for (k=0;k<2;k++){
					sum=sum+a[i][k]*b[k][j];
					c[i][j]=sum;
				}
			}
		}
	}
	else{
		printf("multiplication is not possible\n");
		return;
	}

	printf("the multiplication of the two matrices is\n");
	for (i=0;i<m;i++){
		for (j=0;j<q;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
}
