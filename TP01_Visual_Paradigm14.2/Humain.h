#ifndef HUMAIN_H
#define HUMAIN_H

class Humain {

private:
	string Nom;
	boolean Vie;
	boolean Force;
	Boolean Jedi;
	Sexe SexePerso;

public:
	Humain();

	void Combattre();

	void Manger();

	void Dormir();

	void Parler();
};

#endif
