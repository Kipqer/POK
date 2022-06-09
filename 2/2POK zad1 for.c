#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
	
	float x,xp,xk;
	int i;
	
	printf("Podaj wartosc x, xp, xk \n");
	scanf("%f %f %f", &x, &xp, &xk);
	printf("\n");
	
	for(i=1;pow(x,i)<=xk;i++)
	{
		if(pow(x,i)>=xp)printf("%f \n",pow(x,i));
	}
	
	return 0;
}
