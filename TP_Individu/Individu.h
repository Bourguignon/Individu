#pragma once
#include "define.h"
class Individu
{
	string numSecu;
	string nom;
	string prenom;
	int jour_Naissance;
	int mois_Naissance;
	int Annee_Naissance;
	string profession;


public:
	Individu(string numSecu);
	Individu(string num,string nom, string prenom, int jour, int mois, int an,string profession);
	~Individu();

	string const getNom() { return this->nom; };
	string const getPrenom() { return this->prenom; };
	string const getNumSecu() { return this->numSecu; };
	string const getDateNaissance();
	string const getProfession() { return this->profession; };

	void sauvegarde();
	void setProfession(const string profession);

};

