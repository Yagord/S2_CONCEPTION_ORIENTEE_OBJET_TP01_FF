#ifndef VAISSEAU_H
#define VAISSEAU_H

/**
 * Un Vaisseau n'a pas d'attribut.
 * 
 * Un Vaisseau a quatre fonctions :
 * Vaisseau() : constructeur,
 * Decoller() : void : qui fait décoller le vaisseau,
 * Aterrir() : void : qui fait aterrir le vaisseau,
 * Tirer() : void : qui fait tirer le vaisseau.
 */
class Vaisseau {


public:
	Vaisseau();

	void Decoller();

	void Aterrir();

	void Tirer();
};

#endif
