#include <iostream>
#include <string>

int main()
{
  char in_char{'x'};

  char i[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

  // i is an array of 10 numerical characters (0-9)

  std::string c{"y"};

  // c is a string variable

  while (std::cin >> in_char)
    {
      if (in_char == i)
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
	    }
	}

      else
	{
          c = toupper(in_char);
	}
      std::cout << c << std::endl;
    }

  return 0;
}
