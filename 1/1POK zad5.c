#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
	
	float a11,a12,a21,a22,b1,b2,x,y,W,Wx,Wy;
	
	printf("a11x+a12y=b1 \na21x+a22y=b2 \n \n");
	printf("Wprowadz a11, a12, b1, a21, a22, b2 \n");
	scanf("%f %f %f %f %f %f",&a11, &a12, &b1, &a21, &a22, &b2);
	
	W=a11*a22-a12*a21;
	Wx=b1*a22-b2*a12;
	Wy=a11*b2-a21*b1;
	
	if(W!=0)
	{
		x=Wx/W;
		y=Wy/W;
		
		printf("x: %f \ny: %f", x, y);
	}
	else{
		if((W==0)&&(Wx==0)&&(Wy==0))printf("Nieskonczenie wiele rozwiazan");
		else printf("Brak rozwiazan");
	}
		
	return 0;
}
