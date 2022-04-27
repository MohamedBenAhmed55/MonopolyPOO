

#include "compagnie.h"
#include "joueur.h"

compagnie::compagnie():propriete("undefinied",NULL,0,NULL){

}

compagnie::compagnie(std::string nom,int* ptLoyer , int prixAchat, Case* suivante,joueur* ptProprietaire):propriete(nom, ptLoyer, prixAchat, suivante) {

	this->ptProprietaire =NULL;
}

compagnie::~compagnie() {
}


void compagnie::arreterSur(joueur* ptJoueur) {
		extern gobelet Gobelet ;
		if (ptProprietaire == NULL){
			std::string reponse;
			std::cout<< "La case : "<< this->nom << "est disponible. Son prix est de "<<this->prixAchat<<" €. Souhaitez-vous l'acheter ?"<< std::endl;
			std::cin>> reponse;

			if (reponse == "oui") {
				joueur Joueur = *ptJoueur;
				Joueur.debiter(this->getPrixAchat());
				std::cout<<"Vous avez achete la propriete "<< this->nom << ". Votre solde est maintenant de " << Joueur.getSolde() << std::endl;
				ptProprietaire = ptJoueur;
			}
			else{
				std::cout<< "Vous avez décidé de ne pas acheter cette propriété"<< std::endl;
			}
		}
		else{
			int multiplicateur = 4 ;
			if (1){
				multiplicateur = 12;
			}

			int loyer = multiplicateur * Gobelet.getValeur() ;
			std::cout << "Vous êtes tombé sur la case " << this->nom << ", vous devez payer "<< loyer << " € ."<< std::endl;
			ptJoueur->crediter(loyer);
			ptJoueur->debiter(loyer);}
}
