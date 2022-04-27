

#ifndef TAXE_H_
#define TAXE_H_

#include "Case.h"
#include "joueur.h"

class taxe: public Case {
public:
	taxe(std::string nom, Case* suivante=NULL);
	virtual ~taxe();
	void arreterSur(joueur* ptJoueur);
};

#endif
