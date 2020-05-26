#include "cards.h"

int Cards::cardsinhand = 0;
int Cards::cardsinopponenthand = 0;
int Cards::maxcardsinhand = 10;
int Cards::maxcardtodraw = 2;
int Cards::cardtodraw1=0;
int Cards::cardtodraw2=0;
sf::Texture Cards::cardbacktext;
int Cards::getcolor()
{
	return this->color;
}
int Cards::getpointsandtype()
{
	return this->pointsandtype;

}
bool Cards::getaretriumf()
{
	return this->aretriumf;
}
bool Cards::getavaiable()
{
	return this->available;
}
int Cards::getnumber()
{
	return this->number;
}
void Cards::setavaiable(bool value)
{
	this->available = value;
}
sf::Sprite Cards::getsprite()
{
	return this->cardsprite;
}
void Cards::setPosition(float x, float y)
{
	this->cardsprite.setPosition(x, y);
}
void Cards::changePosition(float x, float y)
{
	this->cardsprite.move(x, y);
}
void Cards::setcards(int color, int pointsandtype, bool available, bool aretriumf, int number, std::string texture)
{
	this->cardtexture.loadFromFile(texture);
	this->cardsprite.setTexture(this->cardtexture);
	this->color = color;
	this->pointsandtype = pointsandtype;
	this->available = available;
	this->aretriumf = aretriumf;
	this->number = number;
	this->cardsprite.setPosition(-1000, -1000);
}
void Cards::setnumber(int number)
{
	this->number = number;
}
void Cards::settriumf(int triumf)
{
	this->aretriumf = triumf;
}
bool Cards::draw()
{
		if (cardsinhand < Cards::maxcardsinhand)
		{
			Cards::cardsinhand++;

			this->cardsprite.setPosition((2+Cards::cardsinhand * 150), 800);

			this->setavaiable(false);
			this->setnumber(1);

			return true;
		}
		else if(cardsinopponenthand < Cards::maxcardsinhand)
		{
			Cards::cardsinopponenthand++;
			this->cardsprite.setPosition((2+Cards::cardsinopponenthand * 150), 100);

			this->setavaiable(false);
			this->setnumber(2);
			return true;
		}
		else if (cardtodraw1 < Cards::maxcardtodraw)
		{
			Cards::cardtodraw1++;
			this->cardsprite.setPosition((1 + Cards::cardtodraw1 * 150), 550);
			this->setavaiable(false);
			this->setnumber(3);
			return true;
		}
		else if (cardtodraw2 < Cards::maxcardtodraw)
		{
			Cards::cardtodraw2++;
			this->cardsprite.setPosition((1 + Cards::cardtodraw2 * 150), 350);
			this->setavaiable(false);
			this->setnumber(4);
			return true;
		}
		else
		return false;	
}