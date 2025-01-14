/*
* =============================================
* Auteur: Gilles Sinotte, Alberto Oviedo, �tienne Germain
* Laboratoire: Projet finale
* Nom du fichier: assetManager.h
* Date: 2021-12-18
* But: G�rer les chargements des textures et images.
* =============================================
*/
#pragma once
#include <map>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
class assetManager
{
private:
	map<string, Texture> _textures;							//combine le nom de la texture � la Texture sfml
	map<string, Font> _fonts;								//combine le nom de la font � la Font sfml
	map<string, RectangleShape> _rectangle;


public:
	void loadTexture(string name, string fileName);			
	Texture& getTexture(string name);						//pas de const pour ce getteur, car setteur aussi
	void loadFont(string name, string fileName);
	Font& getFont(string name);								//pas de const pour ce getteur, car setteur aussi

};
