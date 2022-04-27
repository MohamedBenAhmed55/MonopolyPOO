

#ifndef PION_H_
#define PION_H_

#include <iostream>



class joueur;
class Case;
class Plateau ;

class pion {
	private :
		joueur* ptJoueur ;
		Case* ptPosition ;
		std::string nom ;
	public:
		pion();
		pion(std::string nom,Case* ptPosition);
		virtual ~pion();

		void setJoueur ( joueur* Joueur ) {this->ptJoueur = Joueur;};
		joueur* getJoueur () { return this->ptJoueur; };

		void setPosition(Case* truc) {this->ptPosition = truc;};
		Case* getPosition() {return this->ptPosition;};

		void setNom(std::string nom){this->nom = nom;};
		std::string getNom(){return this->nom;};

		void deplacer(int combien,Plateau plateau);
};

#endif
