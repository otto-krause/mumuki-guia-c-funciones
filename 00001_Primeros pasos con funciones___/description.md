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
A continuación los mostramos una de las soluciones a las que se puede llegar utilizando dos tipos de funciones distintas que explicaremos más adelante.<br>

``` c
#include <stdio.h>
void Ingresos(); // 1.-
int Total(int RT, int R); // 2.-
int main() 
{
	Ingresos();
	return 0; 
}
void Ingresos()
{
	int R = 0, RT = 0, I = 0;
	for (I=0;I<5;I++)
	{
		printf("Ingrese el valor de la resistencia %d\n", I+1);
		scanf("%d",&R);
		RT = Total (RT, R);// 3.-
	}
	printf("La suma de las %d resistencias es %d\n", I, RT);
}
int Total(int RT, int R)
{
	return RT+R; // 4.-
}
```
>1. **void Ingresos();**<br> Esta es una funcion que no devuelve valor alguno, de tipo **VOID** y no recibe argumentos.<br>

Los parámetros o argumentos de una función son aquellos valores que recibe desde la función de donde es llamada y se encuentran expresados entre los paréntesis luego del tipo y nombre que le asignamos. Tenemos que tener en cuenta que en la llamada a no se indica tipo y en la función sí. Esto se debe a que en la llamada hablamos de variables ya declaradas con valor asignado y en la función son nuevas variables de las que debemos saber el tipo de valor que se espera. Debemos resaltar que los argumentos de la función deben ser solo aquellos valores necesarios para su funcionamiento y que no pueden ser calculados dentro de ella. Todos aquellos valores que se generan dentro de la misma y se obtienen mediante operaciones deben ser variables de tipo local

>2. **int Total(int RT, int R);**<br> Esta es una funcion que no devuelve valor alguno, de tipo **VOID** y no recibe argumentos.<br>







