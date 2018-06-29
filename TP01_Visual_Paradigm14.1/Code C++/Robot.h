#include <exception>
using namespace std;

#ifndef __Robot_h__
#define __Robot_h__

#include "Personnage.h"

// class Personnage;
class Robot;

/**
 * Un Robot est un personnage.
 * 
 * Un Robot a un attribut.
 * Un Robot a trois fonctions.
 */
class Robot: public Personnage
{
	/**
	 * Fonction (String) qui indique la fonction du robot.
	 */
	private: String _fonction;

	/// <summary>
	/// Constructeur.
	/// </summary>
	public: Robot();

	/// <summary>
	/// Combattre() : void : qui fait combattre le robot.
	/// </summary>
	public: void combattre();

	/// <summary>
	/// Parler() : void : qui fait parler le robot.
	/// </summary>
	public: void parler();
};

#endif
