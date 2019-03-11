Las funciones que devuelven un valor funcionan como un número común y corriente!

Si tenemos la siguiente línea de código:

``` c
int a = 4;
```

El valor almacenado en la variable `a` es de 4, que pasa si tenemos la siguiente línea de código?

``` c
int b = siguiente(3);
```

Cuando se ejecuta esa línea de código, se llama a la funcion siguiente con el valor 3 como parámetro, al terminar su procesamiento la misma va a retornar el valor 4, y luego ese valor se almacenara en la variable `b`.
Por lo tanto el valor contenido en la variable `b` será de 4.

No es el único lugar donde se puede utilizar el valor de retorno de una función, veamos el siguiente ejemplo:

``` c
int suma(int a, int b)
{
  return a + b;
}

int dobleDeLaSuma(int a, int b)
{
  return suma(a,b)*2;
}
```

En este código observamos como se utiliza el valor de retorno de una función para realizar un cálculo y luego devolver su valor.

> **Conclusiones:**<br>
1. El valor de retorno de una funcion puede almacenarse.<br>
2. El valor de retorno de una funcion puede usarse para realizar calculos.<br>
3. El valor de retorno de una funcion puede retornarse o usarse en otra funcion.<br>