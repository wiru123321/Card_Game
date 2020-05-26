#pragma once
#include <SFML/Graphics.hpp>

class Cards {
protected:
	int color;//1-pik,2-treft,3-karo,4-kier
	int pointsandtype;//9-0p,10-10p,J-2p,Q-3p,K-4p,As-11p
	bool available;//1- nie została użyta,0-zostala użyta
	bool aretriumf;//true-jest kartą aktualnie triumf, false-nie jest triumfem
	int number; //1-moja talia,2-talia przeciwnika,3-musik 1,4-musik 2,5-ja je wygralem ,6 przeciwnik je wygral
	sf::Texture cardtexture;
	sf::Sprite cardsprite;
	
public:
	static sf::Texture cardbacktext;
	static int cardsinhand;
	static int cardsinopponenthand;
	static int maxcardsinhand;
	static int maxcardtodraw;
	static int cardtodraw1;
	static int cardtodraw2;
	int getcolor();
	int getpointsandtype();
	bool getavaiable();
	bool getaretriumf();
	int getnumber();
	void setnumber(int number);
	void settriumf(int triumf);
	sf::Sprite getsprite();
	void setPosition(float x, float y);
	void changePosition(float x, float y);
	bool draw();
	void setcards(int color, int pointsandtype, bool available, bool aretriumf, int number, std::string texture);
	void setavaiable(bool value);
};