//Ejercicio 3 EulerProject optimizado
//Se añade función para calcular la suma de todos los divisores primos de un número
//Como se está usando el argc y argv, obligatoriamente se debe colocar el argumento al momento de ejecutar ./a.out n.

#include <iostream>
#include <cmath>  //Para utilizar sqrt
#include <cstdlib> //Para utilizar atoll

bool isprime(long long n);
long long largestprimedivisor(long long n);
long long sumprimedivisors(long long n);

//La función main recibe el argumento void, pero también es posible añadir dos argumentos a la función main para ejecutar desde la consola. Estos argumentos son int argc, char **argv.

// $ ./a.out ----> argc = 1, argv = [./a.out]
// $ ./a.out 12 -----> argc = 2, argv = [./a.out,12]
// $ ./a.out 12 -1 ---------> argc = 3, argv = [./a.out,12,-1]

//A partir de estos nombres se puede acceder a las variables desde la consola.
//Para acceder al 2do dato del arreglo argv se usa argv[1] y se debe transformar a dígito


int main(int argc, char **argv)
{
  const long long n = std::atoll(argv[1]); //Se usa atoll para pasar a un long long.
  //const long long n = 600851475147;
  //const long long n = 600851475143;
  std::cout << "Largest prime divisor of number n = " << largestprimedivisor(n) << std::endl;
  std::cout << "Sum of all prime divisors of number n = " << sumprimedivisors(n) << std::endl;
  return 0;
}


//----------------------------------//------------------------//---------------
//FUNCIONES CREADAS AUXILIARES

//Función que dice si un número n es primo o no.
bool isprime(long long n) //Función que retorna un booleano y recibe un long long
{
  bool isprime = true;
  for (long long j=2; j <= std::sqrt(n); j++)
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
  for (long long i = 2; i <= n/2; i++)
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
  if (isprime(n) == true)
    {
      largedivisor = n;
    }
  return largedivisor; //Retorna la variable
}

//------------------------------------//-------------------------------------//
long long sumprimedivisors(long long n) //Suma de todos los divisores primos
{
  long long sum = 0;
  for (long long k = 2; k <= n; k++)
    {
      if (n%k == 0 && isprime(k))
	{
	  sum += k;
	  n /= k;
	}
    }
  return sum;
}
