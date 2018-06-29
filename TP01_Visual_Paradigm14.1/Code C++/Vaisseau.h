#include <exception>
using namespace std;

#ifndef __Vaisseau_h__
#define __Vaisseau_h__

class Vaisseau;

/**
 * Un Vaisseau du monde Star Wars.
 * 
 * Un Vaisseau n'a pas d'attribut.
 * Un Vaisseau a quatre fonctions.
 */
class Vaisseau
{

	/// <summary>
	/// Constructeur.
	/// </summary>
	public: Vaisseau();

	/// <summary>
	/// Decoller() : void : qui fait décoller le vaisseau.
	/// </summary>
	public: void decoller();

	/// <summary>
	/// Aterrir() : void : qui fait aterrir le vaisseau.
	/// </summary>
	public: void aterrir();

	/// <summary>
	/// Tirer() : void : qui fait tirer le vaisseau.
	/// </summary>
	public: void tirer();
};

#endif
