#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){
	int i,N=5000,h1_Z1=0,h2_Z1=0,h3_Z1=0,h1_Z2=0,h2_Z2=0,h3_Z2=0;
	float Z1,Z2,z1[N],z2[N],x,y,sigmaZ1,sigmaZ2;
	float sumaZ1=0,sumaZ2=0,sredniaZ1=0,sredniaZ2=0,roznicaZ1=0,roznicaZ2=0;

	srand(time(NULL));
	
	#define a "dane10.txt"
	#define b "raport.txt"
	FILE *dane;
	FILE *raport;
	dane=fopen(a,"w");
	raport=fopen(b,"w");
	
	for(i=0;i<N;i++){
		x=((rand()+1)/(float)RAND_MAX);
		y=((rand()+1)/(float)RAND_MAX);
		Z1=cos(2*M_PI*y)*pow(-2*log(x),1.0/2);
		Z2=sin(2*M_PI*y)*pow(-2*log(x),1.0/2);
		fprintf(dane,"%f %f\n",Z1,Z2);
	}
	fclose(dane);
	dane=fopen(a,"r");
	for(i=0;i<N;i++){
		fscanf(dane,"%f %f\n",&Z1,&Z2);
		z1[i]=Z1; z2[i]=Z2;
		sumaZ1=sumaZ1+z1[i];
		sumaZ2=sumaZ2+z2[i];
	}
	
	sredniaZ1=sumaZ1/N;
	sredniaZ2=sumaZ2/N;
	
	for(i=0;i<N;i++){
		fscanf(dane,"%f %f\n",&Z1,&Z2);
		roznicaZ1=roznicaZ1+pow((sredniaZ1-Z1),2);
		roznicaZ2=roznicaZ2+pow((sredniaZ2-Z2),2);
	}
	
	sigmaZ1=pow(((1.0/(N-1))*roznicaZ1),1.0/2);
	sigmaZ2=pow(((1.0/(N-1))*roznicaZ2),1.0/2);
	
	for(i=0;i<N;i++){
		if((z1[i]>=sredniaZ1-sigmaZ1)&&(z1[i]<=sredniaZ1+sigmaZ1))h1_Z1++;
		if((z1[i]>=sredniaZ1-2*sigmaZ1)&&(z1[i]<=sredniaZ1+2*sigmaZ1))h2_Z1++;
		if((z1[i]>=sredniaZ1-3*sigmaZ1)&&(z1[i]<=sredniaZ1+3*sigmaZ1))h3_Z1++;
		if((z2[i]>=sredniaZ2-sigmaZ2)&&(z2[i]<=sredniaZ2+sigmaZ2))h1_Z2++;
		if((z2[i]>=sredniaZ2-2*sigmaZ2)&&(z2[i]<=sredniaZ2+2*sigmaZ2))h2_Z2++;
		if((z2[i]>=sredniaZ2-3*sigmaZ2)&&(z2[i]<=sredniaZ2+3*sigmaZ2))h3_Z2++;
	}
	printf("Przedzialy:\n  Dla Z1:\n    %d\n    %d\n    %d\n  Dla Z2:\n    %d\n    %d\n    %d",h1_Z1,h2_Z1,h3_Z1,h1_Z2,h2_Z2,h3_Z2);
	fprintf(raport,"Przedzialy:\n  Dla Z1:\n    %d\n    %d\n    %d\n  Dla Z2:\n    %d\n    %d\n    %d",h1_Z1,h2_Z1,h3_Z1,h1_Z2,h2_Z2,h3_Z2);

	fclose(dane);
	fclose(raport);
	
	return 0;
}

