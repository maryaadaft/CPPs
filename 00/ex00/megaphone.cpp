#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	else
	{
		for (int ArgCount = 1; ArgCount < argc; ArgCount++)
		{
			for(int letter = 0; argv[ArgCount][letter] != '\0'; letter++)
				std::cout << (char)toupper(argv[ArgCount][letter]);
			if (ArgCount < argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;

	}
}
