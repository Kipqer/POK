#include <stdlib.h>
#include <math.h>
#include <stdio.h>

float Xo,Yo,XD,YD,wynik,x,y;
int i,Nk,Np;

float funkcja(float x, float y){
	
	if(x<y) wynik=2*(x+y);
	else if(x=y) wynik=3;
	else if(x>y) wynik=pow(x,2)-sin(y);
	
	return(wynik);
}

int main(){
	
	printf("Podaj Xo: ");
	scanf("%f",&Xo);	
	printf("Podaj Yo: ");
	scanf("%f",&Yo);
	printf("Podaj XD: ");
	scanf("%f",&XD);	
	printf("Podaj YD: ");
	scanf("%f",&YD);
	printf("Podaj Np: ");
	scanf("%d",&Np);	
	printf("Podaj Nk: ");
	scanf("%d",&Nk);
	
	for(i=Np;i<=Nk;i++){
		y=y+funkcja(Xo+i*XD,Yo-i*YD);
	}
	
	printf("Wynik to: %f",y);
	
	return 0;
}

