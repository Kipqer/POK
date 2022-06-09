#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
	
/*	// d(A,B)=?
	
	float d;
		
	struct punkt{float x,y;};
	
	struct punkt punkt1;
	struct punkt punkt2;
	
	printf("Podaj X i Y 1 punktu: ");scanf("%f %f",&punkt1.x,&punkt1.y);
	printf("Podaj X i Y 2 punktu: ");scanf("%f %f",&punkt2.x,&punkt2.y);
	
	printf("A(%.f,%.f)\nB(%.f,%.f)",punkt1.x,punkt1.y,punkt2.x,punkt2.y);
	
	d=pow((pow((punkt2.x-punkt1.x),2)+pow((punkt2.y-punkt1.y),2)),1.0/2);
	
	printf("\nd(A,B)=%.3f",d);
*/	

/*	// P=?
	
	float P;
	
	struct punkt punkt3;
	
	struct okreg{float r; struct punkt punkt3;};
	
	struct okreg okreg1;
	printf("Wprowadz X i Y okregu: "); 
	scanf("%f %f",&okreg1.punkt3.x,&okreg1.punkt3.y);
	printf("Wprowadz r okregu: "); 
	scanf("%f",&okreg1.r);	
	P=3.14*pow(okreg1.r,2);
	printf("S(%.2f,%.2f)  r=%.2f  P=%.2f",okreg1.punkt3.x,okreg1.punkt3.y,okreg1.r,P);
*/

/*	//Pk=?
	
	struct punkt{float x,y;};
	
	float Pk,D;
	
	struct punkt punkt4;
	struct punkt punkt5;
	
	struct kwadrat{struct punkt punkt4;struct punkt punkt5;};
	
	printf("Podaj X i Y 1 punktu: ");scanf("%f %f",&punkt4.x,&punkt4.y);
	printf("Podaj X i Y 2 punktu: ");scanf("%f %f",&punkt5.x,&punkt5.y);
	
	D=pow((pow((punkt5.x-punkt4.x),2)+pow((punkt5.y-punkt4.y),2)),1.0/2);
	
	Pk=pow(D,2.0)/2.0;
	
	printf("A(%.f,%.f)\nB(%.f,%.f)\nD=%f\nPk=%f",punkt4.x,punkt4.y,punkt5.x,punkt5.y,D,Pk);
*/
	
	return 0;
}

