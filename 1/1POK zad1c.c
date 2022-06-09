#include <stdlib.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
	
	float x,a;
	scanf("%f", &x);
	a = pow((1.0/3+sin(x/2))*(pow(x,3)+3), 1.0/3);
	printf("Wynik to: %f", a);
	
	return 0;
}
