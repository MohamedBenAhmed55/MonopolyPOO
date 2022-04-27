

#include "Carte.h"

Carte::Carte(std::string text,int gain, int perte,int deplacemenent,Case* ptTeleportation) {
	this->gain = gain;
	this->perte = perte ;
	this->ptTeleportation = ptTeleportation;
	this->text = text;

}

Carte::Carte(){
	this->gain=0;
	this->perte=0;
	this->ptTeleportation=NULL;
	this->text="";
}

Carte::~Carte() {
}

