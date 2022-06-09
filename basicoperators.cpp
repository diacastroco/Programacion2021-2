#include <iostream>
#include <cmath> //Para usar std::round()

int main(void)
{
  double x = 9.7, y = -1.87;
  double z = 0;

  z = x + y;
  std::cout << "x + y = " << z << std::endl;
  z = x - y;
  std::cout << "x - y = " << z << std::endl;
  z = x * y;
  std::cout << "x * y = " << z << std::endl;
  z = x / y;
  std::cout << "x / y = " << z << std::endl;
  int m = 9/4; //Los números enternos se truncan, no se aproximan. 
  std::cout << "Numero float escrito como int =  " << m << std::endl;

  std::cout << "Operacioncita = " << 2*3-4.0/5 << std::endl;
  //El 4/5 da 0.8 pero se va a truncar a 0 porque esta declarado como int, no como double. Si se pone como 4.0 ya queda convertido de int a double


  //Operación módulo
  std::cout << "4 % 3 = " << 4%3 << std::endl;
  std::cout << "3 % 3 = " << 3%3 << std::endl;
  std::cout << "2 % 3 = " << 2%3 << std::endl;
  std::cout << "-4 % 3 = " << -4%3 << std::endl;
  std::cout << "-5 % 3 = " << (-5)%3 << std::endl;

  //Formas de reescribir una variable
  double y1 =-1.87, y2 = -1.87;
  y1 = y1 + 0.9;
  y2 += 0.9;
  std::cout << "y1 = " << y1 << std::endl;
  std::cout << "y2 = " << y2 << std::endl;

  //Incrementos y Postincrementos
  int ii = 3, jj = 0;
  jj=++ii; //jj = 4, ii = 4 (Incrementado, luego asignado)
  std::cout << "ii = " << ii << std::endl;
  std::cout << "jj = " << jj << std::endl;
  ii = 3;
  jj = ii++; //jj = ii = 3, ii = 4 (Asignado, luego incrementado)
  std::cout << "ii = " << ii << std::endl;
  std::cout << "jj = " << jj << std::endl;

  return 0;
}
