/* Program that finds the length of a string*/

#include <iostream>


void method1();

int main()
{
	method1();
	
	return 0;
}


void method1()
{
	//title
	std::cout << "-----METHOD 1-----\n";

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


