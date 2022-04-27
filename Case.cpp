

#include "Case.h"
#include "joueur.h"

Case::Case(std::string nom, Case* suivante) {
	this->nom  = nom ;
	this->suivante = suivante;
}

Case::Case(){
	this->nom = "undefinied";
	this->suivante = NULL;
}

Case::~Case() {
}

void Case::arreterSur(joueur *joueur) {

}

