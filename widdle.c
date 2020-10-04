#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
 float fun(float);
 float h , k1=0.0 , k2=0.0 , k3=0.0 , k4=0.0;
 float x[20] , y[20];
 int n , i;

 printf("\nEnter number of parts : ");
 scanf("%d" , &n);
 printf("\nEnter lower and upper limits : ");
 scanf("%f %f" , &x[0] , &x[n]);
 y[0] = fun(x[0]);
 h = (x[n] - x[0]) / n;
 printf("\nx y");
 printf("\n%8.5f %8.5f" , x[0] ,y[0]);
 for(i=1 ; i < n ; i++)

{
x[i] = x[0] + i * h ;
y[i] = fun(x[i]);
printf("\n %8.5f %8.5f " , x[i] , y[i]);
if(i % 6 == 0) k1 = k1 + 2 * y[i];
else
 if(i % 3 == 0) k1 = k1 + 6 * y[i];
 else
  if(i % 2 == 0) k1 = k1 + y[i];
   else
   k4 = k4 + 5 * y[i];
}

y[n] = fun(x[n]);
printf("\n %8.5f %8.5f " , x[n] , y[n]);
y[0] = ((3 * h)/10) * (y[0] + y[n] + k1 + k2 + k3 + k4);
printf("\nresult =%f \n" , y[0]);

 }
 float fun(float x)
  {
  float g; g = sin(x) - log(x) + exp(x);
   return g;

    }
