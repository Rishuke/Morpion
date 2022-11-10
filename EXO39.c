//NOM : BALASUBRAMANIAM
//PRENOM : RISHI
//N°ETUDIANT : 65877216






#include <stdio.h>
#include <stdlib.h>

int main(){
	int taille;
	printf("taille de la mémoire : ");
	scanf("%d",&taille);
	
	int *plage = (int *)calloc(taille, sizeof(int));
	int j,n = 0;
	/*printf("[");
		for (j=0; j< taille; j++){
			//printf("%d",plage[j]);
			if(j){
				printf("%d",plage[j]);
				printf(", ");
			}
			//printf("%d",plage[j]);
		}
		printf("%d",plage[j]);
		printf("]\n");*/
	
	char c;
	do{
		scanf("%c",&c);
		
		if(c == '>'){
			n = (n+1) % taille;
		}else{
			if(c == '<'){
				n = (n+taille-1) % taille;
			}else{
				if(c == '+'){
					plage[n] = plage[n] + 1;
					//printf("%d\n",plage[n]);
				}
				else{
					if(c == '-'){
						plage[n] = plage[n] - 1;
					}else{
						if(c == '='){
								for(j=0; j < taille ; j++){
									plage[j] = plage[n];
									//printf("%d %d\n",plage[j],j);
									//printf("%d\n",plage[n]);
									
								}
						}else{
							if(c == '.'){
								printf("[");
								for (j=0; j< taille; j++){
								//printf("%d",plage[j]);
									if(j){
										//printf("%d",plage[j]);
										printf(", ");
									}
								printf("%d",plage[j]);
								}
								//printf("%d",plage[j]);
								printf("]\n");
						
								}
							}
						}
					}
				}
			}
		
	}while(c != 'q');
	
	
	return 0;
}
