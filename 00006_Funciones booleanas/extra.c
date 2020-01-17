#include <stdio.h>
#include <stdarg.h>

char entradas[2][40] = {
  "Juan",
  "35"
};
char salidas[2][70];

int contEntradas=0;
int contSalidas=0;

void scanm(char * textoFormateado, void * destino){
    sscanf(entradas[contEntradas],textoFormateado,destino);
    contEntradas++;
}

void printm(const char * format, ... )
{
  va_list args;
  va_start (args, format);
  vsprintf (salidas[contSalidas],format, args);
  va_end (args);
  contSalidas++;
}