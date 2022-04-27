

#ifndef CASE_H_
#define CASE_H_

#include <iostream>


class joueur ;



class Case {
	private :
        std::string nom;
        Case* suivante;
	public:
        Case();
		Case(std::string nom, Case* suivante=NULL);
        virtual ~Case();
        void arreterSur(joueur* ptjoueur);
		std::string getNom(){return this->nom;};
		void setNom(std::string nom){this->nom = nom ;};
		Case* getSuivante(){return this->suivante;};
		void setSuivante(Case* suivante){this->suivante = suivante;};
};

#endif
