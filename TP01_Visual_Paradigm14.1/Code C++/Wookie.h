#include <exception>
using namespace std;

#ifndef __Wookie_h__
#define __Wookie_h__

#include "Personnage.h"

// class Personnage;
class Wookie;

/**
 * Un Wookie est un personnage.
 * 
 * Un Wookie n'a pas d'attribut.
 * Un Wookie a quatre fonctions.
 */
class Wookie: public Personnage
{

	/// <summary>
	/// Constructeur.
	/// </summary>
	public: Wookie();

	/// <summary>
	/// Combattre() : void : qui fait combattre le wookie.
	/// </summary>
	public: void combattre();

	/// <summary>
	/// Manger() : void : qui fait manger le wookie.
	/// </summary>
	public: void manger();

	/// <summary>
	/// Dormir() : void : qui fait dormir le wookie.
	/// </summary>
	public: void dormir();
};

#endif
