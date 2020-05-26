#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "cards.h"

class Allcards {

	int maximumcards;
	int allcards;
	bool cardDrawn;
public:
	Allcards();
	~Allcards();
	void drawcard(Cards cards[],int number);

};