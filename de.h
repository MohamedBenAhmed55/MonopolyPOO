
#ifndef DE_H_
#define DE_H_

class de {
private :
	int nbFaces;
	int valeur;
public:
	de();
	virtual ~de();
	int getNbfaces(){return this->nbFaces;};
	int getValeur(){return this->valeur;};
	void lancer();
};

#endif
