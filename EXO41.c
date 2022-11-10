//NOM : BALASUBRAMANIAM
//PRENOM : RISHI
//N°ETUDIANT : 65877216




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *allocStr(char *texte){
	char *res;
	if((res= malloc(( 1 + strlen(texte)) * sizeof(char))) == NULL){
		return NULL;
	}
	strcpy(res,texte);
	return res;
}

int rechercher(const char *texte, char ** noms, int taille){
	int i;
	for(i=0; i < taille;i++){
		if(strcmp(texte,noms[i]) == 0){
			return i;
		}
	}
	
	return -1;
}



int main(){
	int a = 1,b = 2;
	//int i,j;
	char Nom[100];
	int Numero;
	//char *res;
	int taille = 0;
	int c = 0;
	char **noms;
	
	while(a!=b){
		printf("Nom (None pour arrêter) :");
		scanf("%s",Nom);
		if(strcmp(Nom, "None") == 0)
			break;
	
		printf("Numéro:");
		scanf("%d",&Numero);
		
		if (taille >= c){
			c = c *2 + 10;
			/*printf("Erreur ");
			Exit(EXIT_FAILIURE);*/
		}
		noms = (char **)realloc(noms,c * sizeof(char*));
		taille++;
		
	
		
		
		
	}
	return 0;
}
	

