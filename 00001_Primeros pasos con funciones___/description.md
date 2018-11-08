Hasta acá vimos los tipos de estructuras básicas para comenzar a programar, ahora vamos a concentrarnos en aquellos problemas más complejos que requieren más líneas de código o done un mismo cálculo se realiza en repetidas oportunidades.<br>
Para poder afrontar todo lo anteriormente enunciado existen las **funciones** que no son más que pequeños trozos de código (más pequeños que el programa en su totalidad) y que realizan una operación determinada.<br>
Estas **funciones** también se conocen con el nombre de **subprogramas** y la técnica es si se denomina **modularizacion**.<br>
La idea principal de esta técnica es dividir los problemas en pequeños trozos que resuelvan parcialmente las consignas<br>
¿Recuerdan el ejercicio de las resistencias?<br>
Vamos a intentar resolverlo a través de las funciones.<br>
Con los conocimientos que tenemos, una de las posibles soluciones es la siguiente:<br>

``` c
#include <stdio.h>
int main() 
{
	int R = 0, RT = 0, I = 0;
	for (I=0;I<5;I++)
	{
		printf("Ingrese el valor de la resistencia %d\n", I+1);
		scanf("%d",&R);
		RT=RT+R;
	}
	printf("La suma de las %d resistencias es %d\n", I, RT);
	return 0; 
}
```


