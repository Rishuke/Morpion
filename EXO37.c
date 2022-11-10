//NOM : BALASUBRAMANIAM
//PRENOM : RISHI
//N°ETUDIANT : 65877216




#include <stdio.h>
#include <stdlib.h>

int main(){
	int min,max,s = 0,i,n,c = 0;
	float compt = 0.0;
	
	printf("Entrez des entiers positifs : ");
	do{
		scanf("%d",&i);
		//printf("%d\n",i);
		n = i;
		if((n >= 0) && (c < 1)){
			min = i;
			max = i;
			s = s + i;
			if(n!=0)
				compt++;
			c++;
		}else{
			if((n >= 0) && (n > max) && (n > min)){
				max = i;
				s = s +i;
				if(n!=0)
					compt++;
			}else{
				if(( n >=0) && ( n < max ) && (n < min)){
					min = i;
					s = s+i;
					if(n!=0)
						compt++;
				}
				else{
					if(( n >= 0) && ( n <= max) && (n >= min)){
						s = s + i;
						if(n!=0)
							compt++;
					}
				}
			}
		}
	}while(i>=0);
	
	printf("%d\n", min);
	printf("%d\n", max);
	printf("%g\n", s/compt);
	
	return 0;
}
