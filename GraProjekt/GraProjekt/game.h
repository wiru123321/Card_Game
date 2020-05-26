#pragma once
#include <SFML/Graphics.hpp>
#include "cards.h"
#include "allcards.h"
#include <cstdlib>

using namespace sf;


class Game {

public:
	Allcards mycard;
	Allcards opponentcard;
	Allcards maincards;
	Allcards cardtodrawn1;
	Allcards cardtodrawn2;
	Game();
	~Game();
	void initialize();
	void start();
	sf::Font arialfont;
	sf::Text yourname;
	sf::Text opponentname;
	sf::Text iwin;
	sf::Text enemywin;
	sf::Texture przyklad;
	sf::Sprite przykladsprite;
	sf::Texture points100;
	sf::Sprite spoints100;
	sf::Texture points110;
	sf::Sprite spoints110;
	sf::Texture points120;
	sf::Sprite spoints120;
	sf::Texture points130;
	sf::Sprite spoints130;
	sf::Texture points140;
	sf::Sprite spoints140;
	sf::Texture points150;
	sf::Sprite spoints150;
	sf::Texture points160;
	sf::Sprite spoints160;
	sf::Texture points170;
	sf::Sprite spoints170;
	sf::Texture points180;
	sf::Sprite spoints180;
	sf::Texture points190;
	sf::Sprite spoints190;
	sf::Texture points200;
	sf::Sprite spoints200;
	sf::Texture pass;
	sf::Sprite spass;
	sf::Texture musik1;
	sf::Sprite smusik1;
	sf::Texture musik2;
	sf::Sprite smusik2;
private:
	Cards cards[24];
	Cards mycards[10];
	Cards enemycards[10];
	bool draw;
	void Draw();
	void renderCards();
	RenderWindow window;
	bool myturn = true;
	bool enemyturn = false;
	int pointstowin;
	int whogetmore;
	float _x, _y;
	int l = 0;
	int ifmusik1=0;
	int ifmusik2 = 0;
	int ifmusik = 0;
	int point1, point2, color1, color2;
	int howmuch = 0;
	int thiscolor = 0;
	sf::Vector2i firstcardstoswitch;
	sf::Vector2i cardstoswitch;
	int checkcard(float X, float Y);
	bool checkcolorofcard(int color,int inwhodeck);
	int index1;
	int index;
	int checkifking(int color, int inwhodeck);
	int cardsinmydeck,cardsinenemydeck;
	int iplay, enemyplay;
	void checkwhowin(int deck);
	int end;
	int pik = 80, trefl = 100, kier = 60, karo = 40;
	int allmypoints=0, allenemypoints=0;
	int number1;
	int musik=0;
};