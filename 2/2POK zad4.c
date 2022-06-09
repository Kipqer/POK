#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
	
	int a,i,s,np,nk,Amin=99999999,Amin_i,a2,Amin2,Amin2_i;
	printf("Wprowadz Np oraz Nk<Np: \n");
	scanf("%d %d", &np,&nk);
	
	if((np<=0)||(nk<=np))printf("Wprowadzono bledne dane!");
	else{
		
		/*if(np!=1){
			for(i=1;i<np;i++){
			a2=-1*pow(i,2)+15*i+50;
			if(a<Amin2){Amin2=a;Amin2_i=i;}
		}
		*/
		}
		for(i=np;i<=nk;i++){
			a=-1*pow(i,2)+15*i+50;
			s=s+a;
			printf("a%d=%d\n",i,a);
			if(a<Amin){Amin=a;Amin_i=i;}
		}
		printf("S%d : S%d =%d \n", np, nk,s);
		printf("Najmniejsza wartosc (anp-ank) dla a%d=%d", Amin_i,Amin);
		printf("Najmniejsza wartosc (a1-ank) dla a%d=%d", Amin2_i,Amin2);
	}

	return 0;
}
