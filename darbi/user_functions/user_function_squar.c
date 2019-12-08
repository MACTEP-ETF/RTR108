#include<stdio.h>

//float squar(float in);
float squar (float in)
 {
 return in * in;
 }


int main()
 {
 float x;
 for (x=0; x<1; x+=0.1)
	{
	printf("%f %f\n", x, squar(x));
	}
 }

