#include <iostream>


int main()
{
	int min = 0;
	int numbers[25]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24 ,15 };
	int max = 25;
	bool correct = false;


	//	while (min <= max)
	//	{
	//		correct = false;
	//		int guess = (min + max) / 2;
	//		std::cout << "Is this your number: " << std::endl;
	//		std::cout << guess << std::endl;
	//		std::cout << "press 1 for yes and 0 for no" << std::endl;
	//		int Playeranswer = 0;
	//		//Gets the players input to tell whether its the correct nymber
	//		std::cin >> Playeranswer;
	//		if (Playeranswer == 1)
	//		{
	//			correct == true;
	//				return guess;
	//
	//		}
	//		else if (Playeranswer == 0) 
	//		{
	//			//The player tells the computer if the number is higher or lower than the guess made!
	//				std::cout << "Is your answer higher or lower?" << std::endl;
	//				std::cout << "press 1 for higher and 0 for lower" << std::endl;
	//
	//			std::cin >> Playeranswer;
	//
	//			if (Playeranswer == 1)
	//			{
	//				
	//					min = guess + 1;
	//
	//			}
	//			if (Playeranswer == 0)
	//			{
	//				
	//					max = guess - 1;
	//			}
	//		}
	//
	//	}
	//
	//	if (correct == true) 
	//	{
	//		
	//		std::cout << "Another guessed number!" << std::endl;
	//		std::cin;
	//	}
	//	else if (correct == false)
	//	{
	//		
	//		std::cout << " I doubt you are being a fair player!";
	//		std::cin;
	//	}
	//	std::cin;
	//	return 0;
	//

	char Name0[8];
	std::cin >> Name0;
	std::cout << Name0 << std::endl;

	char Name1[8];
	std::cin >> Name1;
	std::cout << Name1 << std::endl;

	char Row1[9] = "_ _ _";
	
	char answer[2] = " ";
	char Board[6] = "1 2 3";
	char Board2[6] = "4 5 6";
	char Board3[6] = "7 8 9";

	std::cout << Name0 << std::endl;
	std::cout << "You are first pick a number from 1 to 9 to place an X" << std::endl;
	std::cin >> answer;
	if (answer == "1") {
		Board[6] >> "X";
	}

	std::cout << Board << std::endl;
	std::cout << Row1 << std::endl;
	std::cout << Board2 << std::endl;
	std::cout << Row1 << std::endl;
	std::cout << Board3 << std::endl;
	std::cout << Row1 << std::endl;


}