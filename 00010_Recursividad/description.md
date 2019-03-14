Llegó una de las partes dificiles. La pregunta ahora es, ¿que es la recursividad?<br> 

> La **recursividad** es una técnica de programación que consiste en que una función se llame a si misma. 

Como?? Eso es posible?? Si, te dejamos un ejemplo:

``` c
void imprimirNumeros(int num)
{
  if(num!=0)
  {
    printf("%d",num);
    num--;
    imprimirNumeros(num);
  }
}
```
Esta función que acabamos de crear imprime numeros desde el numero que se pasa por parámetro hasta llegar a cero, por ejemplo si hicieramos en la main el llamado a la funcion de esta forma:
> imprimirNumeros(50);

Se imprimirian los numeros desde 50 hasta 1. No nos crees? Probalo en la consola!
