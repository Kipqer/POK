#include <stdlib.h>
#include <math.h>
#include <stdio.h>

//using namespace std;

int main(){
	
	float x,z=0;
	scanf("%f", &x);
	if((x==2)||(x==1/3)||(x<-2)) printf("X nie nalezy do dziedziny!");
	else{	
			z = (sqrt(x+2))/(3*pow(x,2)-7*x+2);
			printf("Wynik to: %f", z);
		}
	
	return 0;
}
