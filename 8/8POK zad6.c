#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int p,i;
float x,Xp=1;

float potega(float x,int p){
	if(p==0)p=1;
	for(i=1;i<=p;i++){
		Xp=Xp*x;
	}
	
	return(Xp);
}


int main(){
	
	printf("Podaj podstawe x: ");
	scanf("%f",&x);
	printf("Podaj potege p: ");
	scanf("%d",&p);
	
	printf("Wynik to: %f",potega(x,p));
	
	return 0;
}

