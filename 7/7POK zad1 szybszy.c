#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){
	int i,N=500,h1_Z1=0,h2_Z1=0,h3_Z1=0,h1_Z2=0,h2_Z2=0,h3_Z2=0;
	float z1[N],z2[N],x[N],y[N],sigmaZ1,sigmaZ2;
	float sumaZ1=0,sumaZ2=0,sredniaZ1=0,sredniaZ2=0,roznicaZ1=0,roznicaZ2=0;

	srand(time(NULL));
	
	#define a "dane10.txt"
	#define b "raport.txt"
	FILE *dane;
	FILE *raport;
	dane=fopen(a,"w");
	raport=fopen(b,"w");
	
	for(i=0;i<N;i++){
		x[i]=((rand()+1)/(float)RAND_MAX);
		y[i]=((rand()+1)/(float)RAND_MAX);
		z1[i]=cos(2*M_PI*y[i])*pow(-2*log(x[i]),1.0/2);
		z2[i]=sin(2*M_PI*y[i])*pow(-2*log(x[i]),1.0/2);
		fprintf(dane,"%f %f\n",z1[i],z2[i]);
		sumaZ1=sumaZ1+z1[i];
		sumaZ2=sumaZ2+z2[i];
	}
	
	sredniaZ1=sumaZ1/N;
	sredniaZ2=sumaZ2/N;
	
	for(i=0;i<N;i++){
		roznicaZ1=roznicaZ1+pow((sredniaZ1-z1[i]),2);
		roznicaZ2=roznicaZ2+pow((sredniaZ2-z2[i]),2);
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

