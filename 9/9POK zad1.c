#include <stdlib.h>
#include <math.h>
#include <stdio.h>

float Tab[5];

float wierzcholek(float *Tab){
	Tab[3]=-Tab[1]/(2.0*Tab[0]);
	Tab[4]=-((Tab[1]*Tab[1])-(4*Tab[0]*Tab[2]))/(4.0*Tab[0]);

	return;
}

int main(){
	
	printf("Podaj wspolczynnik a, b, c:");
	scanf("%f %f %f", &Tab[0],&Tab[1],&Tab[2]);
	wierzcholek(Tab);
	printf("W=(%f,%f)",Tab[3],Tab[4]);
	
	return 0;
}

