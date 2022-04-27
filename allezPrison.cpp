

#include "allezPrison.h"
#include "joueur.h"

allezPrison::allezPrison(std::string nom, Case* suivante):Case(nom,suivante) {
	// TODO Auto-generated constructor stub
}

allezPrison::~allezPrison() {
	// TODO Auto-generated destructor stub
}

void allezPrison::arretrSur(joueur* ptJoueur){
	joueur Joueur = *ptJoueur ;
	Joueur.entrerPrison();
}
