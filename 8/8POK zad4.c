#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int N,i,x=0;

int tab_max(int tab[N]){
	for(i=0;i<N;i++){
		if(tab[i]>tab[x])x=i;
	}
	
	return(x,tab[x]);
}

int main(){
	
	srand(time(NULL));
	
	do{
	printf("Podaj N: ");
	scanf("%d",&N);
	}while((N>100)||(N<=0));
	
	
	int tab[N];
	
	for(i=0;i<N;i++){
		tab[i]=rand()%1000+1;
		printf("%d\n",tab[i]);
	}
	
	printf("Najwieksza wartosc: %d",tab_max(tab));
	
	
	
	return 0;
}

