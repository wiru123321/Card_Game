#include <iostream>
#include "game.h"

Game::Game()
{
	 window.create(VideoMode(1920, 1080), "Gra w 1000");
	 window.setFramerateLimit(60);
	 arialfont.loadFromFile("GrafikiKart/arial.ttf");
	 yourname.setFont(arialfont);
	 yourname.setCharacterSize(38);
	 yourname.setColor(Color::Black);
	 yourname.setPosition(1650, 900);
	 yourname.setString("Wojciech");
	 iwin.setFont(arialfont);
	 iwin.setCharacterSize(38);
	 iwin.setColor(Color::Black);
	 iwin.setPosition(-1000, -1000);
	 iwin.setString("Wojciech win");
	 enemywin.setFont(arialfont);
	 enemywin.setCharacterSize(38);
	 enemywin.setColor(Color::Black);
	 enemywin.setPosition(-1000, -1000);
	 enemywin.setString("Enemy win");
	 opponentname.setFont(arialfont);
	 opponentname.setCharacterSize(38);
	 opponentname.setColor(Color::Black);
	 opponentname.setPosition(1650, 200);
	 opponentname.setString("Enemy");
	 points100.loadFromFile("GrafikiKart/100.png");
	 spoints100.setTexture(points100);
	 spoints100.setPosition(1650, 450);
	 points110.loadFromFile("GrafikiKart/110.png");
	 spoints110.setTexture(points110);
	 spoints110.setPosition(1650, 477);
	 points120.loadFromFile("GrafikiKart/120.png");
	 spoints120.setTexture(points120);
	 spoints120.setPosition(1650, 504);
	 points130.loadFromFile("GrafikiKart/130.png");
	 spoints130.setTexture(points130);
	 spoints130.setPosition(1710, 450);
	 points140.loadFromFile("GrafikiKart/140.png");
	 spoints140.setTexture(points140);
	 spoints140.setPosition(1710, 477);
	 points150.loadFromFile("GrafikiKart/150.png");
	 spoints150.setTexture(points150);
	 spoints150.setPosition(1710, 504);
	 points160.loadFromFile("GrafikiKart/160.png");
	 spoints160.setTexture(points160);
	 spoints160.setPosition(1770, 450);
	 points170.loadFromFile("GrafikiKart/170.png");
	 spoints170.setTexture(points170);
	 spoints170.setPosition(1770, 477);
	 points180.loadFromFile("GrafikiKart/180.png");
	 spoints180.setTexture(points180);
	 spoints180.setPosition(1770, 504);
	 points190.loadFromFile("GrafikiKart/190.png");
	 spoints190.setTexture(points190);
	 spoints190.setPosition(1830, 450);
	 points200.loadFromFile("GrafikiKart/200.png");
	 spoints200.setTexture(points200);
	 spoints200.setPosition(1830, 477);
	 pass.loadFromFile("GrafikiKart/Pass.png");
	 spass.setTexture(pass);
	 spass.setPosition(1830, 504);
	 musik1.loadFromFile("GrafikiKart/musik1.png");
	 smusik1.setTexture(musik1);
	 smusik1.setPosition(420, 550);
	 musik2.loadFromFile("GrafikiKart/musik2.png");
	 smusik2.setTexture(musik2);
	 smusik2.setPosition(420, 350);
	 window.clear(Color::Red);
	 initialize();
	 mycard.drawcard(cards, 10);
	 opponentcard.drawcard(cards, 10);
	 cardtodrawn1.drawcard(cards, 2);
	 cardtodrawn2.drawcard(cards, 2);
	 Draw();
	 cardsinenemydeck = 0;
	 cardsinmydeck = 0;
	 opponentname.setColor(Color::Black);
	 yourname.setColor(Color::Green);
}

void Game::initialize()
{
	//pik
	cards[0].setcards(1, 0, 1, 0, 0, "GrafikiKart/9P.png");
	cards[1].setcards(1, 10, 1, 0, 0, "GrafikiKart/10P.png");
	cards[2].setcards(1, 2, 1, 0, 0, "GrafikiKart/JP.png");
	cards[3].setcards(1, 3, 1, 0, 0, "GrafikiKart/QP.png");
	cards[4].setcards(1, 4, 1, 0, 0, "GrafikiKart/KP.png");
	cards[5].setcards(1, 11, 1, 0, 0, "GrafikiKart/AsP.png");
	//trefl
	cards[6].setcards(2, 0, 1, 0, 0, "GrafikiKart/9T.png");
	cards[7].setcards(2, 10, 1, 0, 0, "GrafikiKart/10T.png");
	cards[8].setcards(2, 2, 1, 0, 0, "GrafikiKart/JT.png");
	cards[9].setcards(2, 3, 1, 0, 0, "GrafikiKart/QT.png");
	cards[10].setcards(2, 4, 1, 0, 0, "GrafikiKart/KT.png");
	cards[11].setcards(2, 11, 1, 0, 0, "GrafikiKart/AsT.png");
	//Karo
	cards[12].setcards(3, 0, 1, 0, 0, "GrafikiKart/9KA.png");
	cards[13].setcards(3, 10, 1, 0, 0, "GrafikiKart/10KA.png");
	cards[14].setcards(3, 2, 1, 0, 0, "GrafikiKart/JKA.png");
	cards[15].setcards(3, 3, 1, 0, 0, "GrafikiKart/QKA.png");
	cards[16].setcards(3, 4, 1, 0, 0, "GrafikiKart/KKA.png");
	cards[17].setcards(3, 11, 1, 0, 0, "GrafikiKart/AsKA.png");
	//Kier
	cards[18].setcards(4, 0, 1, 0, 0, "GrafikiKart/9K.png");
	cards[19].setcards(4, 10, 1, 0, 0, "GrafikiKart/10K.png");
	cards[20].setcards(4, 2, 1, 0, 0, "GrafikiKart/JK.png");
	cards[21].setcards(4, 3, 1, 0, 0, "GrafikiKart/QK.png");
	cards[22].setcards(4, 4, 1, 0, 0, "GrafikiKart/KK.png");
	cards[23].setcards(4, 11, 1, 0, 0, "GrafikiKart/AsK.png");
}
Game::~Game()
{
	
}
void Game::start()
{
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
				window.close();
			if (spoints100.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && myturn == true && Mouse::isButtonPressed(Mouse::Left))//ustawianie pozycji przyciskow licytacji
			{
				pointstowin = 100;
				spoints100.setColor(Color(255, 255, 255, 40));
				myturn = false;
				enemyturn = true;
				opponentname.setColor(Color::Green);
				yourname.setColor(Color::Black);
			}
			if (spoints110.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && enemyturn == true && Mouse::isButtonPressed(Mouse::Left) && pointstowin == 100)
			{
				spoints100.setColor(Color(255, 255, 255, 255));
				pointstowin = 110;
				spoints110.setColor(Color(255, 255, 255, 40));
				myturn = true;
				enemyturn = false;
				opponentname.setColor(Color::Black);
				yourname.setColor(Color::Green);
			}
			if (spoints120.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && myturn == true && Mouse::isButtonPressed(Mouse::Left) && pointstowin == 110)
			{
				spoints110.setColor(Color(255, 255, 255, 255));
				pointstowin = 120;
				spoints120.setColor(Color(255, 255, 255, 40));
				myturn = false;
				enemyturn = true;
				opponentname.setColor(Color::Green);
				yourname.setColor(Color::Black);
			}
			if (spoints130.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && enemyturn == true && Mouse::isButtonPressed(Mouse::Left) && pointstowin == 120)
			{
				spoints120.setColor(Color(255, 255, 255, 255));
				pointstowin = 130;
				spoints130.setColor(Color(255, 255, 255, 40));
				myturn = true;
				enemyturn = false;
				opponentname.setColor(Color::Black);
				yourname.setColor(Color::Green);
			}
			if (spoints140.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && myturn == true && Mouse::isButtonPressed(Mouse::Left) && pointstowin == 130)
			{
				spoints130.setColor(Color(255, 255, 255, 255));
				pointstowin = 140;
				spoints140.setColor(Color(255, 255, 255, 40));
				myturn = false;
				enemyturn = true;
				opponentname.setColor(Color::Green);
				yourname.setColor(Color::Black);
			}
			if (spoints150.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && enemyturn == true && Mouse::isButtonPressed(Mouse::Left) && pointstowin == 140)
			{
				spoints140.setColor(Color(255, 255, 255, 255));
				pointstowin = 150;
				spoints150.setColor(Color(255, 255, 255, 40));
				myturn = true;
				enemyturn = false;
				opponentname.setColor(Color::Black);
				yourname.setColor(Color::Green);
			}
			if (spoints160.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && myturn == true && Mouse::isButtonPressed(Mouse::Left) && pointstowin == 150)
			{
				spoints150.setColor(Color(255, 255, 255, 255));
				pointstowin = 160;
				spoints160.setColor(Color(255, 255, 255, 40));
				myturn = false;
				enemyturn = true;
				opponentname.setColor(Color::Green);
				yourname.setColor(Color::Black);
			}
			if (spoints170.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && enemyturn == true && Mouse::isButtonPressed(Mouse::Left) && pointstowin == 160)
			{
				spoints160.setColor(Color(255, 255, 255, 255));
				pointstowin = 170;
				spoints170.setColor(Color(255, 255, 255, 40));
				myturn = true;
				enemyturn = false;
				opponentname.setColor(Color::Black);
				yourname.setColor(Color::Green);
			}
			if (spoints180.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && myturn == true && Mouse::isButtonPressed(Mouse::Left) && pointstowin == 170)
			{
				spoints170.setColor(Color(255, 255, 255, 255));
				pointstowin = 180;
				spoints180.setColor(Color(255, 255, 255, 40));
				myturn = false;
				enemyturn = true;
				opponentname.setColor(Color::Green);
				yourname.setColor(Color::Black);
			}
			if (spoints190.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && enemyturn == true && Mouse::isButtonPressed(Mouse::Left) && pointstowin == 180)
			{
				spoints180.setColor(Color(255, 255, 255, 255));
				pointstowin = 190;
				spoints190.setColor(Color(255, 255, 255, 40));
				myturn = true;
				enemyturn = false;
				opponentname.setColor(Color::Black);
				yourname.setColor(Color::Green);
			}
			if (spoints200.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && myturn == true && Mouse::isButtonPressed(Mouse::Left) && pointstowin == 190)
			{
				spoints190.setColor(Color(255, 255, 255, 255));
				pointstowin = 200;
				spoints200.setColor(Color(255, 255, 255, 40));
				myturn = false;
				enemyturn = true;
				opponentname.setColor(Color::Green);
				yourname.setColor(Color::Black);
			}
			if (spass.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && Mouse::isButtonPressed(Mouse::Left))
			{
				if (myturn)
				{
					opponentname.setColor(Color::Green);
					yourname.setColor(Color::Black);
					myturn = false;
					enemyturn = true;
					whogetmore = 2;
					enemyplay = 1;
				}
				else if (enemyturn)
				{
					opponentname.setColor(Color::Black);
					yourname.setColor(Color::Green);
					myturn = true;
					enemyturn = false;
					whogetmore = 1;
					iplay = 1;
				}
				spass.setColor(Color(255, 255, 255, 40));
			}
			if (smusik1.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && Mouse::isButtonPressed(Mouse::Left) && musik==0)//wybranie jednego z musikow
			{
				smusik1.setColor(Color(255, 255, 255, 40));
				ifmusik1 = 1;
				musik = 1;
			}
			if (smusik2.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && Mouse::isButtonPressed(Mouse::Left) && musik == 0)
			{
				smusik2.setColor(Color(255, 255, 255, 40));
				ifmusik2 = 1;
				musik = 1;
			}
			if (ifmusik1 == 1 || ifmusik2 == 1)//teraz nastepuje zamiana kart gracza z kartami w wybranym musiku poprzez przeciagniecie ich z musika do swojej reki
			{
				while (l < 4)
				{
					if (Mouse::isButtonPressed(Mouse::Left))
					{
						sf::Vector2i firstcardstoswitch = Mouse::getPosition(window);
						while (Mouse::isButtonPressed(Mouse::Left))
						{

						}
						sf::Vector2i cardstoswitch = Mouse::getPosition(window);
						int index = checkcard(firstcardstoswitch.x, firstcardstoswitch.y);
						int index1 = checkcard(cardstoswitch.x, cardstoswitch.y);
						_x = cards[index].getsprite().getPosition().x;
						_y = cards[index].getsprite().getPosition().y;
						int numberofcardstoswitch=cards[index1].getnumber();
						cards[index1].setnumber(cards[index].getnumber());
						cards[index].setnumber(numberofcardstoswitch);
						cards[index].setPosition(cards[index1].getsprite().getPosition().x, cards[index1].getsprite().getPosition().y);
						cards[index1].setPosition(_x, _y);
						Draw();
						l++;
						ifmusik = 1;
					}
				}
			}
			if (ifmusik == 1 && whogetmore == 1)//ture zaczyna gracz wojtek
			{
				for (int a = 0; a < 24; a++)
				{
					if (cardsinmydeck <= 10 &&  cardsinenemydeck<10)//sprawdzanie ilosci kart w rece
					{
						if (cards[a].getsprite().getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && cards[a].getnumber() == 1 && howmuch == 0 && myturn == true)
						{
							if (Mouse::isButtonPressed(Mouse::Left))
							{
								color1 = cards[a].getcolor();
								number1 = cards[a].getnumber();
								if (checkifking(color1, number1)==1)//sprawdzenie czy krol
								{
									if (cards[a].getpointsandtype() == 3)//sprawdzenie czy to dama 
									{
										
										for (int c = 0; c < 24; c++)//jezeli wyrzucona dama a krol w tali(tego samego kolor) to jest meldunek
										{
											if (cards[c].getaretriumf() == 1)//przypisanie triumfow danemu kolorowi
												cards[c].settriumf(0);
										}
										if (cards[a].getcolor() == 1)
										{
											allmypoints = allmypoints + pik;

											for (int b = 0; b < 24; b++)
											{
												if (cards[b].getcolor() == cards[a].getcolor())
												{
													std::cout << "jestem w pik";
													cards[b].settriumf(1);
												}
											}
										}
										else if (cards[a].getcolor() == 2)
										{
											allmypoints = allmypoints + trefl;

											for (int b = 0; b < 24; b++)
											{
												if (cards[b].getcolor() == cards[a].getcolor())
												{
													cards[b].settriumf(1);
												}
											}
										}
										else if (cards[a].getcolor() == 3)
										{
											allmypoints = allmypoints + karo;

											for (int b = 0; b < 24; b++)
											{
												if (cards[b].getcolor() == cards[a].getcolor())
												{
													cards[b].settriumf(1);
												}
											}
										}
										else
										{
											allmypoints = allmypoints + kier;

											for (int b = 0; b < 24; b++)
											{
												if (cards[b].getcolor() == cards[a].getcolor())
												{
													cards[b].settriumf(1);
												}
											}
										}//koniec tury ustawienie parametrow drugiego gracza
										myturn = false;
										cards[a].setPosition(960, 550);
										point1 = cards[a].getpointsandtype();
										index = a;
										enemyturn = true;
										howmuch++;
										cardsinmydeck++;
										yourname.setColor(Color::Black);
										opponentname.setColor(Color::Green);
									}
									else
									{//koniec tury ustawienie parametrow drugiego gracza
										myturn = false;
										cards[a].setPosition(960, 550);
										point1 = cards[a].getpointsandtype();
										color1 = cards[a].getcolor();
										index = a;
										enemyturn = true;
										howmuch++;
										cardsinmydeck++;
										yourname.setColor(Color::Black);
										opponentname.setColor(Color::Green);
									}
								}
								else
								{//koniec tury ustawienie parametrow drugiego gracza
									myturn = false;
									cards[a].setPosition(960, 550);
									point1 = cards[a].getpointsandtype();
									color1 = cards[a].getcolor();
									index = a;
									enemyturn = true;
									howmuch++;
									cardsinmydeck++;
									yourname.setColor(Color::Black);
									opponentname.setColor(Color::Green);
								}
							}
						}
						if (checkcolorofcard(color1, 2))//tura 2 gracza
							//jezeli gracz ma kolor to musi wyrzuccic karte do koloru
						{
							if (cards[a].getsprite().getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && cards[a].getcolor()==color1 && cards[a].getnumber() == 2 && howmuch == 1 && enemyturn == true)
							{
								if (Mouse::isButtonPressed(Mouse::Left))
								{
									enemyturn = false;
									cards[a].setPosition(960, 380);
									point2 = cards[a].getpointsandtype();
									color2 = cards[a].getcolor();
									index1 = a;
									myturn = true;
									howmuch++;
									cardsinenemydeck++;
									Draw();
								}
							}
						}
						else if (cards[a].getsprite().getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && cards[a].getnumber() == 2 && howmuch == 1)
						{//jezeli nie ma koloru moze wyrzucic ktora chce
							if (Mouse::isButtonPressed(Mouse::Left))
							{
								enemyturn = false;
								cards[a].setPosition(960, 380);
								point2 = cards[a].getpointsandtype();
								color2 = cards[a].getcolor();
								index1 = a;
								myturn = true;
								howmuch++;
								cardsinenemydeck++;
								Draw();
							}
						}
						if (howmuch == 2)
						{
							//tu sprawdzanie ktory gracz wygral, sprawdzanie wszystkich mozliwosci
							if (color1 != color2 && cards[index].getaretriumf() == 1)
							{
								cards[index].setnumber(5);
								cards[index].setPosition(50, 850);
								cards[index1].setnumber(5);
								cards[index1].setPosition(50, 850);
								howmuch = 0;
								yourname.setColor(Color::Green);
								opponentname.setColor(Color::Black);
								Draw();
							}
							else if (color1 != color2 && cards[index1].getaretriumf() == 1)
							{
								cards[index].setnumber(6);
								cards[index].setPosition(50, 100);
								cards[index1].setnumber(6);
								cards[index1].setPosition(50, 100);
								howmuch = 0;
								whogetmore = 2;
								enemyturn = true;
								myturn = false;
								yourname.setColor(Color::Black);
								opponentname.setColor(Color::Green);
								Draw();
							}
							else if (color1 != color2 && point1 <= point2)
							{
								cards[index].setnumber(5);
								cards[index].setPosition(50, 850);
								cards[index1].setnumber(5);
								cards[index1].setPosition(50, 850);
								howmuch = 0;
								yourname.setColor(Color::Green);
								opponentname.setColor(Color::Black);
								Draw();
							}
							else if (point1 > point2)
							{
								cards[index].setnumber(5);
								cards[index].setPosition(50, 850);
								cards[index1].setnumber(5);
								cards[index1].setPosition(50, 850);
								howmuch = 0;
								yourname.setColor(Color::Green);
								opponentname.setColor(Color::Black);
								Draw();
							}
							else if (point1 < point2)
							{
								cards[index].setnumber(6);
								cards[index].setPosition(50, 100);
								cards[index1].setnumber(6);
								cards[index1].setPosition(50, 100);
								howmuch = 0;
								whogetmore = 2;
								enemyturn = true;
								myturn = false;
								yourname.setColor(Color::Black);
								opponentname.setColor(Color::Green);
								Draw();
							}
						}
					}//sprawdzenie czy gracze maja jeszcze karty ,jezeli nie to przejscie do petli koncowej
					if (cardsinenemydeck == 10 && cardsinmydeck == 10)
					{
						end = 1;
						cardsinenemydeck++;
					}

				}
			}
			
			if (ifmusik == 1 && whogetmore == 2)//zaczyna 2 gracz poniewaz wygral licytacje
			{
				for (int a = 0; a < 24; a++)
				{
					if (cardsinenemydeck <= 10 && cardsinmydeck < 10)
					{
						if (cards[a].getsprite().getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && cards[a].getnumber() == 2 && howmuch == 0 && enemyturn == true)
						{
							if (Mouse::isButtonPressed(Mouse::Left))
							{
								color1 = cards[a].getcolor();
								number1 = cards[a].getnumber();
								if (checkifking(color1, number1) == 1)
								{

									if (cards[a].getpointsandtype() == 3)
									{

										for (int c = 0; c < 24; c++)
										{
											if (cards[c].getaretriumf() == 1)
												cards[c].settriumf(0);
										}
										if (cards[a].getcolor() == 1)
										{
											allenemypoints = allenemypoints + pik;

											for (int b = 0; b < 24; b++)
											{
												if (cards[b].getcolor() == cards[a].getcolor())
												{
													cards[b].settriumf(1);
												}
											}
										}
										else if (cards[a].getcolor() == 2)
										{
											allenemypoints = allenemypoints + trefl;

											for (int b = 0; b < 24; b++)
											{
												if (cards[b].getcolor() == cards[a].getcolor())
												{
													cards[b].settriumf(1);
												}
											}
										}
										else if (cards[a].getcolor() == 3)
										{
											allenemypoints = allenemypoints + karo;

											for (int b = 0; b < 24; b++)
											{
												if (cards[b].getcolor() == cards[a].getcolor())
												{
													cards[b].settriumf(1);
												}
											}
										}

										else if (cards[a].getcolor() == 4)
										{
											allenemypoints = allenemypoints + kier;

											for (int b = 0; b < 24; b++)
											{
												if (cards[b].getcolor() == cards[a].getcolor())
												{
													cards[b].settriumf(1);
												}
											}
										}
										enemyturn = false;
										cards[a].setPosition(960, 380);
										point1 = cards[a].getpointsandtype();
										color1 = cards[a].getcolor();
										index = a;
										myturn = true;
										howmuch++;
										cardsinenemydeck++;
										yourname.setColor(Color::Green);
										opponentname.setColor(Color::Black);
									}
									else
									{
										enemyturn = false;
										cards[a].setPosition(960, 380);
										point1 = cards[a].getpointsandtype();
										color1 = cards[a].getcolor();
										index = a;
										myturn = true;
										howmuch++;
										cardsinenemydeck++;
										yourname.setColor(Color::Green);
										opponentname.setColor(Color::Black);
									}
								}
								else
								{
									enemyturn = false;
									cards[a].setPosition(960, 380);
									point1 = cards[a].getpointsandtype();
									color1 = cards[a].getcolor();
									index = a;
									myturn = true;
									howmuch++;
									cardsinenemydeck++;
									yourname.setColor(Color::Green);
									opponentname.setColor(Color::Black);
								}
							}
						}
						if (checkcolorofcard(color1, 1))
						{
							if (cards[a].getsprite().getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && cards[a].getcolor() == color1 && cards[a].getnumber() == 1 && howmuch == 1 && myturn == true)
							{
								if (Mouse::isButtonPressed(Mouse::Left))
								{
									myturn = false;
									cards[a].setPosition(960, 550);
									point2 = cards[a].getpointsandtype();
									color2 = cards[a].getcolor();
									index1 = a;
									enemyturn = true;
									howmuch++;
									cardsinmydeck++;
									Draw();
								}
							}
						}
						else if (cards[a].getsprite().getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y) && cards[a].getnumber() == 1 && howmuch == 1 && myturn == true)
						{
							if (Mouse::isButtonPressed(Mouse::Left))
							{
								myturn = false;
								cards[a].setPosition(960, 380);
								point2 = cards[a].getpointsandtype();
								color2 = cards[a].getcolor();
								index1 = a;
								enemyturn = true;
								howmuch++;
								cardsinmydeck++;
								Draw();
							}
						}
						if (howmuch == 2)
						{
							
							if (color1 != color2 && cards[index].getaretriumf() == 1)
							{
								cards[index].setnumber(6);
								cards[index].setPosition(50, 100);
								cards[index1].setnumber(6);
								cards[index1].setPosition(50, 100);
								howmuch = 0;
								opponentname.setColor(Color::Green);
								yourname.setColor(Color::Black);
								Draw();
							}
							else if (color1 != color2 && cards[index1].getaretriumf() == 1)
							{
								cards[index].setnumber(5);
								cards[index].setPosition(50, 850);
								cards[index1].setnumber(5);
								cards[index1].setPosition(50, 850);
								howmuch = 0;
								whogetmore = 1;
								enemyturn = false;
								myturn = true;
								opponentname.setColor(Color::Black);
								yourname.setColor(Color::Green);
								Draw();
							}
							else if (color1 != color2 && point1 <= point2)
							{
								cards[index].setnumber(6);
								cards[index].setPosition(50, 100);
								cards[index1].setnumber(6);
								cards[index1].setPosition(50, 100);
								howmuch = 0;
								opponentname.setColor(Color::Green);
								yourname.setColor(Color::Black);
								Draw();
							}
							else if (point1 > point2)
							{
								cards[index].setnumber(6);
								cards[index].setPosition(50, 100);
								cards[index1].setnumber(6);
								cards[index1].setPosition(50, 100);
								howmuch = 0;
								opponentname.setColor(Color::Green);
								yourname.setColor(Color::Black);
								Draw();
							}
							else if (point1 < point2)
							{
								cards[index].setnumber(5);
								cards[index].setPosition(50, 850);
								cards[index1].setnumber(5);
								cards[index1].setPosition(50, 850);
								howmuch = 0;
								whogetmore = 1;
								enemyturn = false;
								myturn = true;
								opponentname.setColor(Color::Black);
								yourname.setColor(Color::Green);
								Draw();

							}
						}
					}
					if (cardsinenemydeck == 10 && cardsinmydeck == 10)
					{
						end = 1;
						cardsinenemydeck++;
					}
					
				}
			}//petna konczaca program
				if (end == 1)
				{//sprawdzenie kto wygral rozgrywke
					if (iplay == 1)
					{
						checkwhowin(5);
						std::cout << allmypoints;
						end = 0;
					}
					else if (enemyplay == 1)
					{
						checkwhowin(6);
						std::cout << allenemypoints;
						end = 0;
					}
			}
		}
			Draw();
		}
}
//funkcja ktora sprawdza czy kursor na karcie
int Game::checkcard(float X, float Y)
{
	for (int a = 0; a < 24; a++)
	{
		if (cards[a].getsprite().getGlobalBounds().contains(X, Y))
		{
			return a;
		}
	}
	
}
//sprawdzenie czy przeciwnik ma karte danego koloru
bool Game::checkcolorofcard(int color,int inwhodeck)
{
	int z = 0;
	for (int a = 0; a < 24; a++)
	{
		if (cards[a].getcolor() == color && cards[a].getnumber() == inwhodeck)
			return true;
		else
			z++;
	}
	if (z != 0)
		return false;
}
//sprawdzenie czy w tali jest krol danego koloru
int Game::checkifking(int color, int inwhodeck)
{
	int z = 0;
	for (int a = 0; a < 24; a++)
	{
		if (cards[a].getnumber() == inwhodeck && cards[a].getcolor() == color && cards[a].getpointsandtype() == 4)
			return 1;
		else
			z++;
	}
	if (z == 23)
		return 0;
}
//sprawdzenie kto wygral
void Game::checkwhowin(int deck)
{
	for (int a = 0; a < 24; a++)
	{
		if (deck == 5 && cards[a].getnumber() == 3)
			cards[a].setnumber(5);
		else if(deck == 5 == 4 && cards[a].getnumber())
			cards[a].setnumber(5);
		else if(deck == 6 && cards[a].getnumber() == 3)
			cards[a].setnumber(6);
		else if( deck == 6 == 4 && cards[a].getnumber())
			cards[a].setnumber(6);
		if (deck == 5 && cards[a].getnumber() == deck)
			allmypoints = allmypoints + cards[a].getpointsandtype();
		else if(deck == 6 && cards[a].getnumber() == deck)
			allenemypoints = allenemypoints + cards[a].getpointsandtype();
	}
	if (iplay == 1 && allmypoints >= pointstowin)
	{
		iwin.setPosition(1000, 500);
		Draw();
	}
	else if(iplay==1 && allmypoints < pointstowin)
	{
		enemywin.setPosition(1000, 500);
		Draw();
	}
	if (enemyplay == 1 && allenemypoints >= pointstowin)
	{
		enemywin.setPosition(1000, 500);
		Draw();
	}
	else if(enemyplay == 1 && allenemypoints < pointstowin)
	{
		iwin.setPosition(1000, 500);
		Draw();
	}
}
void Game::renderCards() 
{

	for (int a = 0; a < 24; a++)
	{
		window.draw(cards[a].getsprite());
	}
}

void Game::Draw() {
	window.clear(Color::Red);
	window.draw(yourname);
	window.draw(opponentname);
	window.draw(spoints100);
	window.draw(spoints110);
	window.draw(spoints120);
	window.draw(spoints130);
	window.draw(spoints140);
	window.draw(spoints150);
	window.draw(spoints160);
	window.draw(spoints170);
	window.draw(spoints180);
	window.draw(spoints190);
	window.draw(spoints200);
	window.draw(spass);
	window.draw(smusik1);
	window.draw(smusik2);
	window.draw(iwin);
	window.draw(enemywin);
	renderCards();

	window.display();
}