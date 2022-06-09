#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
	
	#define x "wynik.txt"
	
	FILE *nazwa;
	
	int xp,xk,i;
	float y,wynik1,wynik2,wynik3;
	
	nazwa=fopen(x,"w");
	
	printf("Podaj x: ");
	scanf("%f",&y);
	printf("Podaj przedzial [xp,xk]: ");
	scanf("%d %d",&xp,&xk);
	
	for(i=xp;i<=xk;i++){
		
		wynik1=y;
		wynik2=pow(y,2);
		wynik3=pow(y,3);
		y++;
		fprintf(nazwa,"%f %f %f\n",wynik1,wynik2,wynik3);
	}

	fclose(nazwa);
	
	return 0;
}

