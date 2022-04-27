

#ifndef CARTE_H_
#define CARTE_H_

#include "Case.h"

class Carte {
private :
	int gain ;
	int perte ;
	Case* ptTeleportation;
	std::string text;
public:
	int getGain() {return this->gain;};
	int getPerte() {return this->perte;};
	Case* getTeleportation(){return this->ptTeleportation;};
	std::string getText(){return this->text;};
	Carte(std::string text,int gain = 0 , int perte = 0 ,int deplacemenent= 0,Case* ptTeleportation =NULL);
    Carte();
	virtual ~Carte();
};

#endif
