#include <stdlib.h>
#include <math.h>
#include <stdio.h>

float Xp,Xk,DX,i;

float funkcja(float Xp, float Xk,float DX){
	
	for(i=Xp;i<=Xk;i+=DX){
		printf("%f\n",i);
	}
}

int main(){
	
	printf("Podaj Xp: ");
	scanf("%f",&Xp);	
	printf("Podaj Xk: ");
	scanf("%f",&Xk);
	printf("Podaj DX: ");
	scanf("%f",&DX);
	
	funkcja(Xp,Xk,DX);
	
	return 0;
}

