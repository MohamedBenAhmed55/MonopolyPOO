

#include "prison.h"
#include "Case.h"
#include "joueur.h"

prison::prison(std::string nom, Case* suivante):Case(nom,suivante){

}


prison::~prison() {

}

void prison::arreterSur(joueur* ptJoueur) {


	bool incarcere = (*ptJoueur).getPrison();

    ;
}


