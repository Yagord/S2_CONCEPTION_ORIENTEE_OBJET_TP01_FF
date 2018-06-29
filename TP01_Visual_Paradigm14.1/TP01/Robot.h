#ifndef ROBOT_H
#define ROBOT_H

/**
 * Un Robot est un personnage.
 * 
 * Un Robot a un attribut :
 * Fonction (String) qui indique la fonction du robot.
 * 
 * Un Robot a trois fonctions :
 * Robot() : constructeur,
 * Combattre() : void : qui fait combattre le robot,
 * Parler() : void : qui fait parler le robot.
 */
class Robot : Personnage {

public:
	String Fonction;

	Robot();

	void Combattre();

	void Parler();
};

#endif
