//Ejercicio 3 EulerProject
#include <iostream>

int main(void)
{
  const long long n = 600851475147; //Usamos long long para evitar overflow de int. Limite de billones (ver long long limits).

  for (long long i = 2; i < n; i++)
    {
      if (n%i == 0)
	{
	  long long largedivisor = n/i; //Con esto iniciamos buscando el divisor mas pequeño, pero evaluamos directamente el divisor mas largo.
	  
	  bool isprime = true;
	  for (long long j=2; j < largedivisor; j++)
	    {
	      if (largedivisor%j == 0) //Es decir, si tiene algún divisor diferente de 1 y el mismo.
		{
		  isprime = false;
		  break;
		}
	    }
	  if (isprime)
	    {
	      std::cout << "Divisor mas grande = " << largedivisor << std::endl;
	      break;
	    }
	}
    }
  
  return 0;
}
