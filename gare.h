
#ifndef GARE_H_
#define GARE_H_

#include "propriete.h"


class gare : public propriete {
private :
	couleur* ptCouleur ;
public:
	gare();
	gare(std::string nom, int prixAchat=200, Case* suivante=NULL, joueur* ptProprietaire=NULL,int* ptLoyer=NULL);
	virtual ~gare();
	void setptCouleur(couleur* ptCouleur ){this->ptCouleur = ptCouleur;};
	void arreterSur(joueur* ptJoueur);
};

#endif
