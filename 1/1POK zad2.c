#include <stdlib.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
	
	float x,a,b;
	printf("Podaj wartosc a i b:\n");
	scanf("%f %f", &a, &b);
	x=-b/a;
	printf("Xo=%f", x);
	
	return 0;
}
