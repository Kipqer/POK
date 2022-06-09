#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
 
 	float y[1000],L,E;
	int i;
	 
	do{
	printf("Podaj wartosc L: ");
	scanf("%f",&L);
	system("cls");
	if(L<0)printf("!!!Podaj L>=0 !!!\n\n");
	}while(L<0);
	
	do{
	printf("Podaj wartosc E: ");
	scanf("%f",&E);
	system("cls");
	if(E<0)printf("!!!Podaj E>=0 !!!\n\n");
	}while(E<0);
	
	for(i=0;i<=1000;i++){
		if(i==0)y[i+1]=L/2.0;
		else y[i+1]=1.0/2*(y[i]+(L/y[i]));
		if(fabs(y[i+1]-y[i])<E){
				printf("y=%f",y[i+1]);
			break;
		}
	}
	
 return 0;
}

