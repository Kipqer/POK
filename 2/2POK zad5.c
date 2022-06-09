#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main(){
 
 int i,N;
 float s=0,ai=0;
 
 printf("Podaj N: ");
 scanf("%d",&N);
 float a[N];
 a[0]=1;
 a[1]=1.5;
 a[2]=2;
 
 if(N<=0){}
 else{
  if(N<=3){
   printf("%d. %f\n",1,a[0]);
   s=a[0];
   if((N==2)||(N==3)){
    printf("%d. %f\n",2,a[1]);
    s=s+a[1];
   }
   if(N==3) {
    printf("%d. %f\n",3,a[2]);
    s=s+a[2];
   }
   
   printf("Suma: %f",s);
  }
  else{
   s=a[0]+a[1]+a[2];
   
   for(i=3;i<=N;i++){
    if((a[i-2]+a[i-3])>=0)ai=a[i-1]*pow(a[i-2]+a[i-3],1.0/2);
    else ai=a[i-1]*(-pow(a[i-2]+a[i-3],1.0/2));
    a[i]=ai;
    s=s+ai;
   }
   for(i=0;i<=N;i++)printf("a%d: %f\n",-i,a[i]);   printf("Suma: %f",s);
  }
 }
 
 return 0;
}

