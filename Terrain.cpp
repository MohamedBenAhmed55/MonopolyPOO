

#include "Terrain.h"
#include "joueur.h"

Terrain::Terrain():propriete("temporaire",NULL,0,NULL,NULL){
	this->Couleur = NULL;
	this->nMaison = 0 ;
}

Terrain::Terrain(std::string nom, int* ptLoyer, int prixAchat, couleur* Couleur, Case* suivante, joueur* ptProprietaire):propriete(nom, ptLoyer, prixAchat, suivante, ptProprietaire) {
	this->Couleur = Couleur;
	this->nMaison = 0;
}

void Terrain::arreterSur(joueur* ptJoueur){
	if (ptProprietaire == NULL){
		std::string reponse;
		std::cout<< "le bien est disponible. Son prix est de "<<this->prixAchat<<". Souhaitez-vous l'acheter ?"<< std::endl;
		std::cin>> reponse;
		if (reponse == "oui") {
			joueur Joueur = *ptJoueur;
			Joueur.debiter(this->getPrixAchat());
			std::cout<<"Vous avez achete la propriete "<< this->nom << ". Votre solde est maintenant de " << Joueur.getSolde() << std::endl ;
			this->ptProprietaire = ptJoueur;
		}
		else{
			std::cout<< "Vous avez dÃ©cidÃ© de ne pas acheter cette propriÃ©tÃ©"<< std::endl;
	}
	}
	else{
		int loyer = ptLoyer[nMaison];
		std::cout << "Vous etes tombe sur la case " << this->nom << ", vous devez payer "<< loyer << " E."<< std::endl;
		ptProprietaire->crediter(loyer);
		ptJoueur->debiter(loyer);

	}
}


Terrain::~Terrain() {

}

