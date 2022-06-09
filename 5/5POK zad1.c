#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){
	srand(time(NULL));
	
	int x[1000],i,y[11]={0},suma=0;
	
	for(i=0;i<1000;i++){
		x[i]=10+rand()%11;
		printf("X[%d]=%d\n",i,x[i]);
		y[x[i]-10]++;
	}
	
	for(i=0;i<=10;i++){
		printf("%d: %d\n",i+10,y[i]);
	}

 	return 0;
}

