#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
	
	float a,b,c,x1,x2,del;
	printf("Podaj wartosc a,b,c:\n");
	scanf("%f %f %f", &a ,&b ,&c);
	if(a==0)printf("Wprowadzono bledne dane!");
	else
	{
		del=pow(b,2)-4*a*c;
		if(del<0)	printf("Brak rozwiazan!");
		else{
			if(del==0){
				x1=(-b)/2*a;
				printf("X= %f", x1);
			}
			else{
				x1=(-b-sqrt(del))/(2*a);
				x2=(-b+sqrt(del))/(2*a);
				printf("X1= %f \n X2= %f", x1 ,x2);
			}
		}
	}
		
	return 0;
}
