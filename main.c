#include "liste.h"


int main () {
	int n;
	printf ("Entrez le nombre d'elements :");
	scanf ("%d", &n);
	
	ListeSimple* teteSimple = NULL;
	ListeDouble* teteDouble = NULL;
	ListeSimpleCirculaire* teteSimpleCirculaire = NULL;
	ListeDoubleCirculaire* teteDoubleCirculaire = NULL;
	
	for (int i = 0; i < n; i++){
		int valeur;
		printf ("entrez l'element %d :", i + 1);
		scanf ("%d", &valeur);
		
		insererListeSimpleTrie(&teteSimple, valeur);
		insererListeDoubleTrie(&teteDouble, valeur);
		insererListeSimpleCirculaire(&teteSimpleCirculaire, valeur, 1);
		insererListeDoubleCirculaire(&teteDoubleCirculaire, valeur, 1);
	}
	
	printf ("Liste simplement chainee triee : ");
	afficherListeSimple(teteSimple);
	
	printf ("Liste doublement chainee triee : ");
	afficherListeDouble(teteDouble);
	
	printf ("Liste simplement chainee circulaire : ");
	afficherListeSimpleCirculaire(teteSimpleCirculaire);
	
	printf ("Liste doublement chainee circulaire : ");
	afficherListeDoubleCirculaire(teteDoubleCirculaire);
	
	int valeurASupprimer;
	printf ("entrez la valeur a supprimer : ");
	scanf ("%d", &valeurASupprimer);
	
	supprimerOccurences(&teteSimple, valeurASupprimer);
	
	printf ("Liste simplement chainee triee : ");
	afficherListeSimple(teteSimple);
	
	return 0;
}
