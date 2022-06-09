#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){
	srand(time(NULL));
	
	int x[20],i,Xmin, i_Xmin;
	
	for(i=0;i<20;i++){
		x[i]=-10000+rand()%20000;
		printf("X[%d]=%d\n",i,x[i]);
		if(i==0)Xmin=x[i];
		if(x[i]<Xmin){Xmin=x[i];i_Xmin=i;}
	}
	printf("Xmin=%d dla x[%d]",Xmin,i_Xmin);

 	return 0;
}

