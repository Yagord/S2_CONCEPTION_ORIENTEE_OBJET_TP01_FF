#ifndef HUMAIN_H
#define HUMAIN_H

/**
 * Un Humain est un personnage.
 * 
 * Un Humain a trois attributs :
 * SexeHumain (Sexe) qui indique le sexe de l'humain,
 * Force (boolean) qui indique si l'humain possède la Force,
 * Jedi (boolean) qui indique si l'humain est un Jedi.
 * 
 * Un Humain a cinq fonctions :
 * Humain() : constructeur,
 * Combattre() : void : qui fait combattre l'humain,
 * Manger() : void : qui fait manger l'humain,
 * Dormir() : void : qui fait dormir l'humain,
 * Parler() : void : qui fait parler l'humain.
 */
class Humain : Personnage {

private:
	Sexe SexeHumain;
	boolean Force;
	boolean Jedi;

public:
	Humain();

	void Combattre();

	void Manger();

	void Dormir();

	void Parler();
};

#endif
