Vamos a hablar de las funciones booleanas, para eso primero veamos el siguiente codigo:

``` c
bool esMayor(int a, int b)
{
  if(a>b)
    return true;
}
```

El código en cuestión devuelve verdadero o falso dependiendo de si el primer valor es mayor al segundo.
La realidad es que este codigo no es muy óptimo, ya que lo que está como condición dentro del **if** ya devuelve true o false!

La mejor forma de hacer esto sería la siguiente:

``` c
bool esMayor(int a, int b)
{
  return a>b;
}
```

Retornar una condición ya nos da el resultado de la pregunta, no hace falta retornar **true** o **false**.

Vamos a ver si lo entendiste, crea la función `esPar` y utilizala en la función main, para saber si un número ingresado es par o no, mostrá un leyenda por pantalla que nos diga el resultado.

Esperá que el profe te corrija :wink: