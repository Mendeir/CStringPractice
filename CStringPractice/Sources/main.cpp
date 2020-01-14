/* Program that finds the length of a string*/

#include <iostream>


void lengthString();
void copyString();
bool tryAgain();
int menu();


int main()
{
	do
	{
		system("cls");
		switch (menu())
		{
			case 1:
				lengthString();
				break;
			case 2:
				copyString();
				break;
			default: 
				std::cout << "Invalid input! Please try again!";

		}

	} while (tryAgain());
	
	
	return 0;
}


void lengthString()
{
	//title
	std::cout << "\n-----LENGTH OF A STRING-----\n";

	//init
	const int sentenceSize = 100;
	char sentence[sentenceSize];

	//get input
	std::cout << "\nEnter a string: ";
	std::cin.getline(sentence, sentenceSize);

	//init 
	int length = strlen(sentence);

	//output
	std::cout << "Length of a string: " << length << '\n';

}

void copyString()
{
	//title 
	std::cout << "\n-----COPY STRING-----\n";

	//init
	const int sentenceSize = 100;
	char sentence[sentenceSize];
	char copySentence[sentenceSize];
	int counter = 0;

	//get input
	std::cout << "\nEnter a string: ";
	std::cin.getline(sentence, sentenceSize);

	//copy string
	for (counter = 0; counter < (static_cast<int>(strlen(sentence))); ++counter)
		copySentence[counter] = sentence[counter];

	//terminate copysentence
	copySentence[counter] = '\0';

	//output
	std::cout << "\nOriginal sentence: " << sentence;
	std::cout << "\nCopied sentence: " << copySentence << '\n';


}

bool tryAgain()
{
	char choice;

	do
	{
	std::cout << "\nDo you want to try again? (y/n): ";
	std::cin >> choice;

	} while (choice != 'y' && choice != 'n');

	return (choice == 'y');
}

int menu()
{

	while (true)
	{
		int choice;
		
		std::cout << "-----MENU-----\n"
			<< "\n\t1. Length of a String"
			<< "\n\t2. Copy String\n";

		std::cout << "\nChoose a number: ";
		std::cin >> choice;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "\nInvalid Input! Please try again!\n\na";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return choice;
		}

	}
	
}
