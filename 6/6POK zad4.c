#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
	
	float wynik[200];
	int i;
	
	srand(time(NULL));
	
	#define x "dane.txt"
	#define y "dane1.txt"
	#define z "dane2.txt"
	
	FILE *wszystko;
	FILE *duze;
	FILE *male;
	
	wszystko=fopen(x,"r");
	duze=fopen(y,"w");
	male=fopen(z,"w");
	
	for(i=0;;i++){
	if(feof(wszystko))break;
	fscanf(wszystko,"%f",&wynik[i]);
	if(wynik[i]>0){
		fprintf(duze,"%f\n",wynik[i]);
	}
	else if(wynik[i]<0){
		fprintf(male,"%f\n",wynik[i]);
	}
	}
	
	fclose(wszystko);
	fclose(duze);
	fclose(male);
	
	return 0;
}

