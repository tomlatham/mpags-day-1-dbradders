#include <iostream>
#include <string>

int main()
{
  const char* charlie{"c"};

  std::string msg {"Physics"};

  std::cout << charlie << std::endl;

  std::cout << msg[5] << std::endl;
  
  return 0;

}
