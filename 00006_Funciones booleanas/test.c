describe ("Descripción del grupo") {
  it ("El numero 5 no es par.") {
    principal();
    should_string(salidas[0]) be equal to("El numero 5 no es par.");
  } end
  
  it ("El numero 8 es par.") {
    principal();
    should_string(salidas[1]) be equal to("El numero 2 no es par.");
  } end
} end