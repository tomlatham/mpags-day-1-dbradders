#include <iostream>
#include <string>

int main()
{
  char in_char{'x'};
  char c;
  while (std::cin >> in_char)
    {
      c = toupper(in_char);

      std::cout << c << std::endl;
    }



  return 0;
}
