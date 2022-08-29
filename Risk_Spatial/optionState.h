/*
* =============================================
* Auteur: Gilles Sinotte, Alberto Oviedo
* Laboratoire: Projet finale
* Nom du fichier: optionState.h
* Date: 2021-12-18
* But: etat option pour gerer la musique
* =============================================
*/

#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "DEFINITIONS.hpp"
#include "game.h"
#include "state.hpp"
#include "mainMenuState.h"

//#include "mainMenuState.hpp"
using namespace sf;
using namespace std;
//chaque state repr�sentera une vraie fen�tre et h�rite de state, car on impl�mentera 
//un init, update, draw et handleInput diff�rent pour chaque fen�tre.
class optionState : public state
{
private:
	gameDataRef _data; 
	Sprite _background; //le sprite pour la background

	RectangleShape _rectangleJeu;
	RectangleShape _rectangleState;

	vecteur<RectangleShape> _options;

	Text _nomJeu;
	Text _nomState;
	Text _menuButton;
	Text _musicButtonOn;
	Text _musicButtonOff;

	bool _musicIsOn;

public:
	optionState(gameDataRef data, bool soundActive);			//constructeur			
	void init();												//initialise les options
	void handleInput();											//gere les actions du joueur
	void update(float dt);
	void draw(float dt);										//affiche l'�tat
};