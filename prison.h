

#ifndef PRISON_H_
#define PRISON_H_

#include "Case.h"

class Case;

class prison: public Case {

public:
	prison(std::string nom, Case* suivante=NULL);
	virtual ~prison();
	void arreterSur(joueur* ptJoueur) ;
};

#endif
