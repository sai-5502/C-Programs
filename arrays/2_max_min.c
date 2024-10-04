#include <stdio.h>
#define N 10

void main(){
	int a[N],i,fmin,smin,fmax,smax;
	for (i=0;i<N;i++)
		scanf("%d",&a[i]);
	printf("the elements are\n");
	for (i=0;i<N;i++)
		printf("%d ",a[i]);

	if (a[0]<a[1]){
		fmin=a[0];
		smin=a[1];
	}
	else{
		fmin=a[1];
		smin=a[0];
	}

	for (i=0;i<N;i++){
		if (a[i] < fmin){
			smin=fmin;
			fmin=a[i];
		}
		else if (a[i] < smin && a[i] > fmin)
			smin=a[i];
	}
	printf("\nthe 1st minimum element is %d\n",fmin);
	printf("the 2nd minimum element is %d\n",smin);

	if (a[0]>a[1]){
		fmax=a[0];
		smax=a[1];
	}
	else{
		fmax=a[1];
		smax=a[0];
	}

	for (i=2;i<N;i++){
		if (a[i] > fmax){
			smax=fmax;
			fmax=a[i];
		}
		else if (a[i] > smax && a[i] < fmax)
			smax=a[i];
	}
	printf("\nthe 1st maximum element is %d\n",fmax);
	printf("the 2nd maximum element is %d\n",smax);

}	
