#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int x,i,suma=0,p=0;
	float srednia=0;
	
	for(i=1;i<=5;i++){
		printf("Podaj x:");
		scanf("%d",&x);
		if((i>5)||(x<0))break;
		if((x>=5)&&(x<=15)){
			suma+=x;p++;
		}
	}
	
	if(p>0)srednia=suma/p;
	
	printf("Wprowadzono %d liczb, a srednia liczb z zakresu [5,15] to %.2f",i-1,srednia);

	return 0;
}

