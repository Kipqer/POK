#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
 
 	float y,wynik=0,x;
 	int i,N;
 	
 	printf("Podaj wartosc x: ");
 	scanf("%f",&x);
	printf("Podaj wartosc N: ");
 	scanf("%d",&N);

	if(N>=-5){
		for(i=-5;i<=N;i++){
				y=pow(x,i)*sin(i*x);
				wynik=wynik+y;
		}
	}
	else{
		for(i=-5;i>=N;i--){
				y=pow(x,i)*sin(i*x);
				wynik=wynik+y;
		}
	}
	
	printf("Wynik: %f",wynik);
	
 	
	
 return 0;
}

