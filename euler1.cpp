#include <iostream>

int main(void)
{
  int n = 1000; //límite
  int suma = 0;
  
  for(int i=1; i<n; i+=1)
    if ((i%3 == 0) || (i%5 == 0))
      {
	suma += i;
      }

  std::cout << "Suma de múltiplos = " << suma << std::endl;

  return 0;
}
