#include <iostream>


int main() 
{
	int min = 0;
	int numbers[25]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24 ,15 };
	int max = 25;
	bool correct = false;
	
	
	while (min <= max)
	{
		correct = false;
		int guess = (min + max) / 2;
		std::cout << "Is this your number: " << std::endl;
		std::cout << guess << std::endl;
		int Playeranswer = 0;
		
		std::cin >> Playeranswer;
		if (Playeranswer == 1)
		{
			correct == true;
				return guess;

		}
		else if (Playeranswer == 0) 
		{
			
				std::cout << "Is your answer higher or lower?" << std::endl;

			std::cin >> Playeranswer;

			if (Playeranswer == 1)
			{
				
					min = guess + 1;

			}
			if (Playeranswer == 0)
			{
				
					max = guess - 1;
			}
		}
		
		

	}

	if (correct == true) 
	{
		std::cout << "Another guessed number!" << std::endl;
		

	}
	else if (correct == false)
	{
		std::cout << " I doubt you are being a fair player!";
	}

	
	
	return 0;
}