
#include "taxe.h"

taxe::taxe(std::string nom, Case* suivante):Case(nom,suivante) {
}

taxe::~taxe() {
}

void taxe::arreterSur(joueur* ptJoueur){
	(*ptJoueur).debiter(200);
}
