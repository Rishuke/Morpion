//NOM : BALASUBRAMANIAM
//PRENOM : RISHI
//N°ETUDIANT : 65877216





#include <stdio.h>
#include <stdlib.h>

int main(){
	const char *infos = "Linus Torvalds 52 ans C";
	
	char Prenom[50],Nom[50],Annee[50],langage[50];
	int Age;
	
			
	sscanf(infos,"%s %s %d %s %s",Prenom,Nom,&Age,Annee,langage);
	
	printf("Prenom : %s\n",Prenom);
	printf("Nom : %s\n",Nom);
	printf("Age : %d\n",Age);
	printf("Parle couramment la langue %s\n",langage);
	return 0; 
	
	
}
