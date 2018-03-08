#include "Individu.h"
const string FICHIER("C:/Users/kevin/Desktop/TP_Individu/Debug/test.txt");
const string FICHIERB("C:/Users/kevin/Desktop/TP_Individu/Debug/test.bin");

//Lecture en mode texte
Individu::Individu(string numSecu)
{
	string ligne;
	ifstream fichier(FICHIER, ios::app);

	if (fichier) {
		string num;
		while (num != numSecu) {
			fichier >> num;

		}

		if (num == numSecu) {
			this->numSecu = num;
			fichier >> this->nom;
			fichier >> this->prenom;
			fichier >> this->jour_Naissance;
			fichier >> this->mois_Naissance;
			fichier >> this->Annee_Naissance;
			fichier >> this->profession;

		}
		fichier.close();
	}
	else {
		cout << "Impossible d ouvrir le fichier " << endl;
	}
	
}

//Lecture en mode binaire
/*Individu::Individu(string numSecu)
{
	string ligne;
	ifstream fichier(FICHIERB,ios_base::binary);

	if (fichier) {

				fichier.read(reinterpret_cast<char*>(&this->numSecu), sizeof(string));
				fichier.read(reinterpret_cast<char*>(&this->nom), sizeof(string));
				fichier.read(reinterpret_cast<char*>(&this->prenom), sizeof(string));
				fichier.read(reinterpret_cast<char*>(&this->jour_Naissance), sizeof(int));
				fichier.read(reinterpret_cast<char*>(&this->mois_Naissance), sizeof(int));
				fichier.read(reinterpret_cast<char*>(&this->Annee_Naissance), sizeof(int));
				fichier.read(reinterpret_cast<char*>(&this->profession), sizeof(string));
		fichier.close();
	}
	else {
		cout << "Impossible d ouvrir le fichier " << endl;
	}

}*/

Individu::Individu(string num, string nom, string prenom, int jour, int mois, int an, string profession)
{
	this->numSecu = num;
	this->nom = nom;
	this->prenom = prenom;
	this->jour_Naissance = jour;
	this->mois_Naissance = mois;
	this->Annee_Naissance = an;
	this->profession = profession;
}

Individu::~Individu()
{
}

string const Individu::getDateNaissance()
{
	string dateNaissance = to_string(jour_Naissance) + '/' + to_string(mois_Naissance) + '/' + to_string(Annee_Naissance);
	return dateNaissance;
}

//Ecriture mode texte 
void Individu::sauvegarde()
{
	ofstream fichier(FICHIER, ios::app);

	if (fichier) {
		cout << "fichier ouvert" << endl;
		fichier << this->numSecu << " " << this->prenom << " " << this->nom << " " << this->jour_Naissance << " " <<this->mois_Naissance<< " "<<  this->Annee_Naissance<<" " << getProfession() << endl;
		cout << "ecriture dans le fichier" << endl;
		fichier.close();
	}
	else {
		cout << "Impossible d ouvrir le fichier " << endl;
	}
}

//Ecriture mode binaire
/*void Individu::sauvegarde()
{
	ofstream fichier(FICHIERB,ios::app, ios_base::binary);

	if (fichier) {
		fichier.write(reinterpret_cast<const char*>(&this->numSecu), sizeof(string));
		fichier.write(reinterpret_cast<const char*>(&this->nom), sizeof(string));
		fichier.write(reinterpret_cast<const char*>(&this->prenom), sizeof(string));
		fichier.write(reinterpret_cast<const char*>(&this->jour_Naissance), sizeof(int));
		fichier.write(reinterpret_cast<const char*>(&this->mois_Naissance), sizeof(int));
		fichier.write(reinterpret_cast<const char*>(&this->Annee_Naissance), sizeof(int));
		fichier.write(reinterpret_cast<const char*>(&this->profession), sizeof(string));
		
		fichier.close();
	}
	else {
		cout << "Impossible d ouvrir le fichier " << endl;
	}
}
*/
void Individu::setProfession(const string profession)
{
	this->profession = profession;
}
