#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	FILE*numberFile = fopen("number.txt","r");

	char number[100];
	fgets(number,sizeof(number),numberFile);
	int a,i;
	
	for(i=0;i<sizeof(number);i++){
		a = atof(number);
		fgets(number,100,numberFile);
	}

	float sum;
		
	for(i=0;i<sizeof(number);i++){
		sum = sum + number[i];
		return sum;
	}
	
	float mean= sum/sizeof(number);

	float sumOD;

	for(i=0;i<sizeof(number);i++){
		sumOD= sumOD+(number[i]-mean)*(number[i]-mean);
		return sumOD;
	}

	float square= sumOD/(sizeof(number)-1);
	float s= sqrt(square);

	printf("%f\n",s);

	fclose(numberFile);

	return 0;
}
