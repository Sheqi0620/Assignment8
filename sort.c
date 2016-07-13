#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int x;
	printf("Please enter an integer:\n");
	char*array1=malloc(x*sizeof(array1));
	fgets(array1,x,stdin);
	size_t last=strlen(array1);

	int i,j;
	for(i=0;i<x;i++){
		array1[i]=rand();
		j=atoi(&array1[i]);
		fgets(array1,x,stdin);
	}

	char*array2=malloc(x*sizeof(array2));
	fgets(array2,x,stdin);
	char*array3=malloc(x*sizeof(array3));
	fgets(array3,x,stdin);
	strcpy(array1,array2);
	strcpy(array1,array3);

	int a,b; //www.studystreet.com/c-program-sort-array-ascending-order/
	int tem1;
	for(a=0;a<x;a++)
	{
		for(b=0;b<x-a;b++)
		{
			if(array2[b]>array2[b+1])
			{
				tem1=array2[b];
				array2[b]=array2[b+1];
				array2[b+1]=tem1;
			}
		}
	}

	int c,d; //www.studystreet.com/program-sort-array-descending-order/
	int tem2;
	for(c=0;c<x;c++)
	{
		for(d=0;d<x-a;d++)
		{
			if(array3[d]<array3[d+1])
			{
				tem2=array3[d+1];
				array3[d+1]=array3[d];
				array3[d]=tem2;
			}
		}
	}

	printf("%p",array1);
	printf("%p",array2);
	printf("%p",array3);

	return 0;
}

