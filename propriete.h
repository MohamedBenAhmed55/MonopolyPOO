
#ifndef PROPRIETE_H_
#define PROPRIETE_H_

#include "Case.h"
#include "couleur.h"

class propriete: public Case {
protected :
	std::string nom ;
	int* ptLoyer ;
	int prixAchat ;
	joueur* ptProprietaire;
public:
	propriete(std::string nom, int* ptLoyer, int prixAchat, Case* suivante, joueur* ptProprietaire= NULL);
	virtual ~propriete();
	void arreterSur() ;
	std::string getNom(){return this->nom;};
	void setNom(std::string Nom){this->nom=Nom;};
	int* getPtLoyer(){return this->ptLoyer;};
	void setLoyer(int* ptLoyer){this->ptLoyer = ptLoyer;};
	void setPrixAchat(int prix){this->prixAchat = prix;};
	int getPrixAchat(){return this->prixAchat;};
	void SetProprietaire(joueur* ptProprietaire){this->ptProprietaire = ptProprietaire;};
	joueur* GetProprietaire(){return this->ptProprietaire;};
};
#endif
