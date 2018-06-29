#ifndef ROBOT_H
#define ROBOT_H

class Robot {

private:
	string Nom;
	boolean Vie;
	String Fonction;

public:
	Robot();

	void Combattre();

	void Parler();
};

#endif
