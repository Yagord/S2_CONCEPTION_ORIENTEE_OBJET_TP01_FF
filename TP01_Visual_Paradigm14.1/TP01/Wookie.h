#ifndef WOOKIE_H
#define WOOKIE_H

/**
 * Un Wookie est un personnage.
 * 
 * Un Wookie n'a pas d'attribut.
 * 
 * Un Wookie a quatre fonctions :
 * Wookie() : constructeur,
 * Combattre() : void : qui fait combattre le wookie,
 * Manger() : void : qui fait manger le wookie,
 * Dormir() : void : qui fait dormir le wookie.
 */
class Wookie : Personnage {


public:
	Wookie();

	void Combattre();

	void Manger();

	void Dormir();
};

#endif
