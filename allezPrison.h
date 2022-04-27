

#ifndef ALLEZPRISON_H_
#define ALLEZPRISON_H_

#include "Case.h"
#

class allezPrison: public Case {
public:
	allezPrison(std::string nom, Case* suivante=NULL);
	virtual ~allezPrison();
	void arretrSur(joueur* ptJoueur);
};

#endif
