Es importante que tengas en cuenta que los valores que se pasan por parametro y se declaran dentro de una función, **SOLO EXISTEN DENTRO DE ESA FUNCIÓN**

Veamos el siguiente código:

``` c
void sumarDos(int a)
{
  a=a+2;
}

void main()
{
  int num = 4;
  printf("Ingrese el numero a sumar");
  scanf("%d",&num)
  
  sumarDos(num);
  
  printf("El valor de num es de: %d", num);
  system("pause")
}
```
¿Qué crees que va a mostrar por pantalla el programa al finalizar?

<br>

Va a mostrar el valor 4. Esto se debe a lo que hablamos al principio, los parámetros de la función se pasan **por copia**. Esto quiere decir que se realiza una copia local dentro de la función y cuando ésta finaliza la copia desaparece, sin modificar el valor original.

<br>

Si quisieramos que pasando parametros se pueda modificar el valor original, debemos utilizar el método de **paso por referencia**, para ello primero deberemos aprender punteros, así que lo veremos más adelante.