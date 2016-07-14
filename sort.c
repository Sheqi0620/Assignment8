#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	srand(time(NULL));
	printf("Please enter an integer:\n");
	int x;
	scanf("%d",&x);
	int array1[x];
	int*p=array1;
	p=(int*) malloc (100);

	int i;
	for(i=0;i<x;i++){
		array1[i]=rand()%100;
	//	printf("%d\n",array1[i]);
	}

	int array2[x];
	int array3[x];
	int*q=array2;
	q=(int*) malloc(100);
	int*b=array3;
	b=(int*) malloc(100);

	for(i=0;i<x;i++){
		array2[i]=array1[i];
		array3[i]=array1[i];
//		printf("%d\n",array2[i]);
	}

	int j; //www.studystreet.com/c-program-sort-array-ascending-order/
	int tem1=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<x-i;j++)
		{
			if(array2[j]>array2[j+1])
			{
				tem1=array2[j];
				array2[j]=array2[j+1];
				array2[j+1]=tem1;
			}
		}
	}

	int d; //www.studystreet.com/program-sort-array-descending-order/
	int tem2=0;
	for(i=0;i<x;i++)
	{
		for(d=0;d<x-i;d++)
		{
			if(array3[d]<array3[d+1])
			{
				tem2=array3[d+1];
				array3[d+1]=array3[d];
				array3[d]=tem2;
			}
		}
	}
	
	printf("array1 is:\n");
	for(i=0;i<x;i++){
		printf("%d\n",array1[i]);
	}

	printf("array2 is:\n");
	for(i=0;i<x;i++){
		printf("%d\n",array2[i]);
	}

	printf("array3 is:\n");
	for(i=0;i<x;i++){
		printf("%d\n",array3[i]);
	}

	return 0;
}

