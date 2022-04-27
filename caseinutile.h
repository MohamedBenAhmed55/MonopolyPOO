
#ifndef CASEINUTILE_H_
#define CASEINUTILE_H_

#include "Case.h"

class case_inutile: public Case {
public:
	case_inutile(std::string nom, Case* suivante=NULL);
	virtual ~case_inutile();
	void arreterSur(){};
};

#endif
