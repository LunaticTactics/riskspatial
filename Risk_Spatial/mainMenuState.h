/*
* =============================================
* Auteur: Gilles Sinotte, Alberto Oviedo, �tienne Germain
* Laboratoire: Projet finale
* Nom du fichier: MainMenuState.h
* Date: 2021-12-18
* But: Objet MainMenu (Menu principal du Jeu)
* =============================================
*/
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "DEFINITIONS.hpp"
#include "game.h"
#include "state.hpp"
#include "vecteur.hpp"
#include "hud.h"

//#include "mainMenuState.hpp"
using namespace sf;
using namespace std;
//chaque state repr�sentera une vraie fen�tre et h�rite de state, car on impl�mentera 
//un init, update, draw et handleInput diff�rent pour chaque fen�tre.
class mainMenuState : public state
{
private:
	gameDataRef _data; 

	Sprite _background; //le sprite pour la background
	vecteur<RectangleShape> _menu;
	RectangleShape _rectangleJeu;

	Text _nomJeu;
	Text _playButton;
	Text _quitButton;
	Text _optionButton;

	SoundBuffer _musicMenuBuffer;
	Sound _musicMenu;


	bool _soundActive;
public:
	mainMenuState(gameDataRef data, bool music);					//constructeur
	void init();													//initialise les donn�s du menu
	void handleInput();												//gere les actions de l'utilisateur
	void update(float dt);											
	void draw(float dt);											//affiche le menu
};