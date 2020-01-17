describe ("Prueba de función") 
{
  it ("2014 no es bisiesto") 
  {
    should_bool(esBisiesto(2014)) be equal to(false);
  } end
  it ("1900 no es bisiesto") 
  {
    should_bool(esBisiesto(1900)) be equal to(false);
  } end
  
  it ("2012 es bisiesto") 
  {
    should_bool(esBisiesto(2014)) be equal to(true);
  } end
  
  
} end