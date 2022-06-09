//Operaciones lógicas y booleanas
#include <iostream>
#include <string>

int main(void)
{
  //True = 1, False = 0.
  std::cout << "7 == 5 --> " << (7 == 5) << std::endl;
  std::cout << "5 > 4 --> " << (5 > 4) << std::endl;
  std::cout << "3 != 2 --> " << (3 != 2) << std::endl; //! = Negación
  std::cout << "6 >= 6 --> " << (6 >= 6) << std::endl;
  std::cout << "5 < 5 --> " << (5 < 5) << std::endl;

  //And (&&) y Or (||) A nivel de valores
  std::cout << "((5==5) && (3<6)) --> " << ((5==5) && (3<6)) << std::endl;
  std::cout << "((5==5) || (3<6)) --> " << ((5==5) || (3<6)) << std::endl;

  //Operador ternario

  //Para definir la flag con strings
  std::string  verdad;
  std::string  mentira;
  verdad= "Verdá";
  mentira = "Mentiroso";
  
  std::string flag = (5>4) ? verdad : mentira; //Se puede cambiar verdad : mentira por int flag = (5>4) ? -1 : 32 donde -1 es True y 32 es False.
  //Funciona como un if/else. Se pueden colocar funciones, operaciones, etc.
  std::cout << "Operador ternario (5>4) --> " << flag << std::endl;

  
  //And, or, correr 2 lugares a la derecha/izquierda (<</>>) a nivel de bit
  int m = 2, n = 17;
  int k = 0;

  k = m & n;
  std::cout << "k = m & n --> " << k << std::endl;
  k = m | n;
  std::cout << "k = m | n --> " << k << std::endl;
  k = m << 2;
  std::cout << "k = m << n --> " << k << std::endl;
  k = m >> 2;
  std::cout << "k = m >> n --> " << k << std::endl;

  //Por ejemplo: 4 en binario es 0100. 8 es 1000.
  //4&8 = 0100 & 1000 = 0000 = 0
  //4|8 = 0100 | 1000 = 1100 = 12.
  
  return 0;
}
