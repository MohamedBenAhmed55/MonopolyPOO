
#include "joueur.h"
#include "gare.h"

gare::gare():propriete("undefinied",NULL,200,NULL,NULL){
	this->ptCouleur = NULL;
}

gare::gare(std::string nom, int prixAchat, Case* suivante, joueur* ptProprietaire,int* ptLoyer):propriete(nom,ptLoyer,prixAchat,suivante, ptProprietaire) {
	int* loyers = new int[4];
	loyers[0] = 25 ;
	loyers[1] = 50 ;
	loyers[2] = 100 ;
	loyers[3] = 200 ;
	this->ptCouleur = NULL;
}

void gare::arreterSur(joueur* ptJoueur){
	if (this->ptProprietaire == NULL){
		std::string reponse;
		std::cout << "Vous etes tombe sur la case " << this->nom <<" Cette propriete n'appartient a  personne. Souhaitez-vous l'acheter pour "<< prixAchat << "E ?"<< std::endl;
		std::cin >> reponse;
		if (reponse == "Oui") {
			ptJoueur->debiter(prixAchat);
			std::cout<<"Vous avez achete la propriete "<< this->nom << ". Votre solde est maintenant de " << ptJoueur->getSolde() << std::endl ;
			this->ptProprietaire = ptJoueur;
		}
		else{
			std::cout<< "Vous avez décidé de ne pas acheter cette propriété"<<std::endl;
		}
	}
	else{
		couleur Couleur = *ptCouleur;
		Couleur.checkGare(ptJoueur);
		int nbr_gares = Couleur.checkGare(ptJoueur);
		int loyer = ptLoyer[nbr_gares];
		std::cout << "Le proprietaire de cette case est "<< ptProprietaire << " vous lui devez " << loyer<<std::endl;
		ptJoueur->debiter(loyer);
		ptProprietaire->crediter(loyer);
	}
}
gare::~gare() {
}
