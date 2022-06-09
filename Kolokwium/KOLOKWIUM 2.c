#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float max,min;
int min_i,max_i;

float max_min(int N, float a[N]){
	int i;
	for(i=0;i<=N;i++)
	{
		if(i==0){
			max=a[i];
			min=a[i];
			max_i=i;
			min_i=i;
		}
		if(a[i]>=max){
			max=a[i];
			max_i=i;
		}
		if(a[i]<=min){
			min=a[i];
			min_i=i;
		}
	}
}

int zapis(int N, float a[N]){
	int i;
	FILE *plik;
	
	plik=fopen("kolos.txt","w");
	
	for(i=0;i<=N;i++){	
		fprintf(plik,"a[%d]=%f\n",i,a[i]);
	}

	fclose(plik);
}

int main(){
	
	int N,i;
	
	do{
		printf("Podaj N:");
		scanf("%d",&N);
		
	}while((N<1)||(N>30));

	float a[N];
	a[0]=3;
	a[1]=2;
	for(i=2;i<=N;i++){
		
		a[i]=cos(a[i-1])+sin(a[i-2]);
		printf("a[%d]=%f\n",i,a[i]);
	
	}
	
	max_min(N,a);
	
	printf("Max a[%d]=%f\nMin a[%d]=%f",max_i,max,min_i,min);
	
	zapis(N,a);

	return 0;
}

