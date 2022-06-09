#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
 
	float f,xp,xk,dx,x,fmax,fsuma=0,fsr;
	int licznik=0;
	
	printf("Podaj przedzial: ");
	scanf("%f %f", &xp,&xk);
	do{
		printf("Podaj krok (dx>0): ");
		scanf("%f", &dx);
	}while(dx<=0);

	for(x;x<=xk;x=x+dx){ //dok³adnosc
			if(x<0) f=-pow(fabs(x),3)+1.0/x;
			else if(x==0) f=3*pow(2,1.0/2);
			else f=pow(sin(pow(x,1.0/2)),1.0/3);
		
			if(f>fmax)fmax=f;
			fsuma=fsuma+f;
		
			printf("Dla x=%f Wynik to: %f\n",x,f);
		
			licznik++;
		}
	printf("Fmax: %f\n",fmax);
	printf("Srednia: %f",(fsuma/licznik));


 
 return 0;
}

