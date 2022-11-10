//NOM : BALASUBRAMANIAM
//PRENOM : RISHI
//N°ETUDIANT : 65877216






#include <stdio.h>
#include <stdlib.h>

void clearGrille(int largeur, int hauteur,int grille[][hauteur]){
	int i,j;
	
	for(i=0;i < hauteur; i++){
		for(j=0; j < largeur;j++){
			grille[i][j] = 0;
		}
	}
}


void clearGrille2(int largeur, int hauteur,char tab[][hauteur]){
	int i,j;
	
	for(i=0;i < hauteur; i++){
		for(j=0; j < largeur;j++){
			tab[i][j] = ' ';
		}
	}
}
	
	
	
	
void afficherGrille(int largeur, int hauteur,int grille[][hauteur]){
	int i,j;
	
	for(i=0;i < hauteur; i++){
		for(j=0; j < largeur;j++){
			printf(" %d   |",grille[i][j]);
			
		}
		printf("\n");
		printf("|____|_____|_____|");
		printf("\n");
	}
}

void placerGrille(int n ,int hauteur, int largeur,int grille[][hauteur]){
	if(n == 1){
		grille[2][0] = n;
	}else{
		if(n == 2){
			grille[2][1] = n;
		}else{
			if(n == 3){
				grille[2][2] = n;
			}else{
				if(n == 4){
					grille[1][0] = n;
				}else{
					if(n == 5){
						grille[1][1] = n;
					}else{
						if(n == 6){
							grille[1][2] = n;
						}else{
							if(n == 7){
								grille[0][0] = n;
							}else{
								if(n == 8){
									grille[0][1] = n;
								}else{
									if(n == 9)
										grille[0][2] = n;
								}
							}
						}
					}
				}
			}
		}
	}
}


void placerGrille2(char c,int n,int largeur, int hauteur,char tab[][hauteur]){
	
	if((n == 1) && (tab[2][0] == ' ')){
		tab[2][0] = c;
	}else{
		if((n == 2) && (tab[2][1] == ' ')) {
			tab[2][1] = c;
		}else{
			if((n == 3) && (tab[2][2] == ' ')){
				tab[2][2] = c;
			}else{
				if((n == 4) && (tab[1][0] == ' ')){
					tab[1][0] = c;
				}else{
					if((n == 5) && (tab[1][1] == ' ')){
						tab[1][1] = c;
					}else{
						if((n == 6) && (tab[1][2] == ' ' )){
							tab[1][2] = c;
						}else{
							if((n == 7) && (tab[0][0] == ' ')){
								tab[0][0] = c;
							}else{
								if((n == 8) && (tab[0][1] == ' ')){
									tab[0][1] = c;
								}else{
									if((n == 9) && (tab[0][2] == ' '))
										tab[0][2] = c;
								}
							}
						}
					}
				}
			}
		}
	}
	
	
	
}


void afficherGrille2(int largeur, int hauteur,char tab[][hauteur]){
	int i,j;
	
	for(i=0;i < hauteur; i++){
		for(j=0; j < largeur;j++){
			printf(" %c   |",tab[i][j]);
			
		}
		printf("\n");
		printf("|____|_____|_____|");
		printf("\n");
	}
}
		
int finishGrille(int largeur, int hauteur, char tab[][hauteur]){
	if((tab[0][0] == 'X') && (tab[0][1] == 'X' ) && (tab[0][2] == 'X')){
		return 1;
	}else{
		if((tab[1][0] == 'X') && (tab[1][1] == 'X' ) && (tab[1][2] == 'X')){
			return 1;
		}else{
			if((tab[2][0] == 'X') && (tab[2][1] == 'X' ) && (tab[2][2] == 'X')){
				return 1;
			}else{
				if((tab[0][0] == 'X') && (tab[1][0] == 'X' ) && (tab[2][0] == 'X')){
					return 1;
				}else{
					if((tab[0][1] == 'X') && (tab[1][1] == 'X' ) && (tab[2][1] == 'X')){
						return 1;
					}else{
						if((tab[0][2] == 'X') && (tab[1][2] == 'X' ) && (tab[2][2] == 'X')){
							return 1;
						}else{
							if((tab[0][0] == 'X') && (tab[1][1] == 'X' ) && (tab[2][2] == 'X')){
								return 1;
							}else{
								if((tab[0][2] == 'X') && (tab[1][1] == 'X' ) && (tab[2][0] == 'X')){
									return 1;
								}else{	
									if((tab[0][0] == 'O') && (tab[0][1] == 'O' ) && (tab[0][2] == 'O')){
										return 1;
									}else{
										if((tab[1][0] == 'O') && (tab[1][1] == 'O' ) && (tab[1][2] == 'O')){
											return 1;
										}else{
											if((tab[2][0] == 'O') && (tab[2][1] == 'O' ) && (tab[2][2] == 'O')){
												return 1;
											}else{
												if((tab[0][0] == 'O') && (tab[1][0] == 'O' ) && (tab[2][0] == 'O')){
													return 1;
												}else{
													if((tab[0][1] == 'O') && (tab[1][1] == 'O' ) && (tab[2][1] == 'O')){
														return 1;
													}else{
														if((tab[0][2] == 'O') && (tab[1][2] == 'O' ) && (tab[2][2] == 'O')){
															return 1;
														}else{
															if((tab[0][0] == 'O') && (tab[1][1] == 'O' ) && (tab[2][2] == 'O')){
																return 1;
															}else{
																if((tab[0][2] == 'O') && (tab[1][1] == 'O' ) && (tab[2][0] == 'O')){
																	return 1;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;

}								
				
				


int main(){
	int grille[3][3];
	char tab[3][3];
	
	clearGrille(3,3,grille);
	clearGrille2(3,3,tab);
	afficherGrille2(3,3,tab);
	printf("\n");
	//afficherGrille(3,3,grille);
	printf("Saisir un chiffre entre 1 et 9 pour commencer à jouer:");
	int i,cmpt=0;
	do{
		scanf("%d",&i);
		
		if( cmpt % 2 != 0){	
			placerGrille(i,3,3,grille);
			placerGrille2('X',i,3,3,tab);
			afficherGrille2(3,3,tab);
			cmpt++;
			if(finishGrille(3,3,tab)== 1){
				printf("Le joueur X gagne !\n");
				i = 10;
			}
		}else{
			placerGrille(i,3,3,grille);
			placerGrille2('O',i,3,3,tab);
			afficherGrille2(3,3,tab);
			cmpt++;
			if(finishGrille(3,3,tab) == 1){
				printf("Le joueur O gagne !\n");
				i = 10;
			}
		}
		
		
	}while((i > 0) && (i < 10) && (cmpt < 100));
	
	//afficherGrille(3,3,grille);
	//afficherGrille2(3,3,tab);
	
	return 0;
}
	
