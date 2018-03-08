#include "Individu.h"
const string FICHIER("C:/Users/kevin/Desktop/TP_Individu/Debug/test.txt");

int main(){

	Individu Jo("7","Jo","Felrhat",10,20,30,"Programmeur");
	Individu Kevin("12", "Kevin", "Bourguignon", 20, 06, 1995, "Programmeur");

	Jo.sauvegarde();
	//Kevin.sauvegarde();

	Individu test(Jo.getNumSecu());
	
	cout << test.getNumSecu() <<" "<< test.getNom() <<" "<< test.getPrenom() <<" "<< test.getDateNaissance() <<" "<< test.getProfession() << endl;
	
	system("pause");

	return 0;
}