//Ejercicio 3 EulerProject implementando funciones
#include <iostream>

bool isprime(long long n);
long long largestprimedivisor(long long n);

int main(void)
{
  const long long n = 600851475147;
  std::cout << "Largest prime divisor of number n = " << largestprimedivisor(n) << std::endl;
  return 0;
}

//----------------------------------//------------------------//---------------
//FUNCIONES CREADAS AUXILIARES

//Función que dice si un número n es primo o no.
bool isprime(long long n) //Función que retorna un booleano y recibe un long long
{
  bool isprime = true;
  for (long long j=2; j < n; j++)
    {
      if (n%j == 0) 
	{
	  isprime = false;
	  break;
	}
    }
  return isprime;
}

//----------------------------------//-----------------------//----------------
//Función que calcula el divisor mas grande que sea primo de un número n.
long long largestprimedivisor(long long n) //Funcion que recibe un long long y retorna un long long
{
  long long largedivisor = 0; //Inicializamos la variable
  for (long long i = 2; i < n; i++)
    {
      if (n%i == 0) //Al primer divisor que encuentra, lo toma de una 
	{
	  long long result = n/i; //Como el 1er divisor es el mas pequeño, esto inicializa el divisor mas grande.
	  if (isprime(result) == true) //Evaluamos si el número "result" es primo
	    {
	      largedivisor = result; //Si es primo, asigna result a la variable
	      break;
	    }
	}
    }
  return largedivisor; //Retorna la variable
}
