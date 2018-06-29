#include <exception>
using namespace std;

#ifndef __Humain_h__
#define __Humain_h__

#include "Sexe.h"
#include "Personnage.h"

// enum Sexe;
// class Personnage;
class Humain;

/**
 * Un Humain est un personnage.
 * 
 * Un Humain a trois attributs.
 * Un Humain a cinq fonctions.
 */
class Humain: public Personnage
{
	/**
	 * SexeHumain (Sexe) qui indique le sexe de l'humain.
	 */
	private: Sexe _sexeHumain;
	/**
	 * Force (boolean) qui indique si l'humain possède la Force.
	 */
	private: bool _force;
	/**
	 * Force (boolean) qui indique si l'humain possède la Force,
	 */
	private: bool _jedi;

	/// <summary>
	/// Constructeur.
	/// </summary>
	public: Humain();

	/// <summary>
	/// Combattre() : void : qui fait combattre l'humain.
	/// </summary>
	public: void combattre();

	/// <summary>
	/// Manger() : void : qui fait manger l'humain.
	/// </summary>
	public: void manger();

	/// <summary>
	/// Dormir() : void : qui fait dormir l'humain.
	/// </summary>
	public: void dormir();

	/// <summary>
	/// Parler() : void : qui fait parler l'humain.
	/// </summary>
	public: void parler();
};

#endif
