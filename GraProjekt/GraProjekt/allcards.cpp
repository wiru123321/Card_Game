#include "allcards.h"

Allcards::Allcards(){
	
	maximumcards = 24;
	
}

Allcards::~Allcards()
{

}

void Allcards::drawcard(Cards cards[],int number) 
{
	int const smallestId = 1;
	srand(time(NULL));

	std::cout << "Card drawn\n";
	int i = 0;

	while(i<number)
	{
		int numberOfCardToDraw = (std::rand() % 24)+ smallestId;

		if ((cards[numberOfCardToDraw-1].getavaiable()) == 1 && cards[numberOfCardToDraw-1].getnumber() == 0)
		{
			if (cards[numberOfCardToDraw-1].draw())
			{
				std::cout << "Card drawn\n";
				i++;
			}
		}
			else std::cout << "A card had been drawn before your current try.\n";
	}
}




