#include <iostream>
#include <string>

int main()
{
  char in_char{'x'};

  std::string c {"y"};

  while (std::cin >> in_char)
    {
      switch (in_char)
	{
	    case 0:
	       c = "ZERO";
	       break;
	    case 1:
	       c = "ONE";
	       break;
	    case 2:
	       c = "TWO";
	       break;
	    case 3:
	       c = "THREE";
	       break;
	    case 4:
	       c = "FOUR";
	       break;
	    case 5:
	       c = "FIVE";
	       break;
 	    case 6:
	       c = "SIX";
	       break;
	    case 7:
	       c = "SEVEN";
	       break;
	    case 8:
	       c = "EIGHT";
	       break;
	    case 9:
	       c = "NINE";
	       break;
	    default:
               c = toupper(in_char);
	}
      std::cout << c << std::endl;
    }

  return 0;
}
