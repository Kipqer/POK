#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int tab[2][2],i,j;

int wyznacznik(int tab[2][2]){
	return(tab[0][0]*tab[1][1]-tab[1][0]*tab[0][1]);
}

int main(){
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Tab[%d][%d]=",i,j);
			scanf("%d",&tab[i][j]);
		}
	}
	
	printf("Wyznacznik: %d",wyznacznik(tab));
	
	return 0;
}

