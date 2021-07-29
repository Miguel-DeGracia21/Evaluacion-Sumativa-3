#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char * argv[])
{
	float a,b,c,d,y,x1,x2;
	printf ("Escriba los coeficientes de la ecuacion de segundo grado \n");
	scanf ("%f""%f""%f",&a,&b,&c);
	d=((b*b)-4*a*c);

	if (d<0)
	{
		printf ("Las raices son imaginarias\n");
	}

	else
	{
		y= sqrt ((b*b)-4*a*c);
		x1= (-b+y)/(2*a);
		x2= (-b-y)/(2*a);
		printf ("La raices de la funcion son: %.2f y %.2f\n",x1,x2);
	}

	system ("PAUSE");
	return 0;
}

