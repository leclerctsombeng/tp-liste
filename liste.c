#include "liste.h"

// fonction pour lire un element et supprimer toutes ces occurences dans la liste simplement chainee

void supprimerOccurences(ListeSimple** tete, int valeur) {
	ListeSimple* courant = *tete;
	ListeSimple* precedent = NULL;
	
	while (courant != NULL){
		if (courant -> valeur == valeur){
			if (precedent == NULL){
				*tete = courant -> suivant;
			} else {
				precedent -> suivant = courant -> suivant;
			}
			ListeSimple* temp = courant;
			courant = courant -> suivant;
			free(temp);
		} else {
			precedent = courant;
			courant = courant -> suivant;
		}
	}
}

// fonction pour inserer un element dans une liste simplement chainee triee

void insererListeSimpleTrie(ListeSimple** tete, int valeur){
	ListeSimple* nouveau = (ListeSimple*)malloc(sizeof(ListeSimple));
	nouveau -> valeur = valeur;
	nouveau -> suivant = NULL;
	
	if (*tete == NULL || (*tete) -> valeur >= valeur){
		nouveau -> suivant = *tete;
		*tete = nouveau;
	} else {
		ListeSimple* courant = *tete;
		while (courant -> suivant != NULL && courant -> suivant -> valeur < valeur){
			courant = courant -> suivant;
		}
		nouveau -> suivant = courant -> suivant;
		courant -> suivant = nouveau;
	}
}

// fonction pour inserer un element dans une liste doublement chainee triee

void insererListeDoubleTrie (ListeDouble** tete, int valeur){
	ListeDouble* nouveau = (ListeDouble*)malloc(sizeof(ListeDouble));
	nouveau -> valeur = valeur;
	nouveau -> suivant = NULL;
	nouveau -> precedent = NULL;
	
	if (*tete == NULL || (*tete) -> valeur >= valeur){
		nouveau -> suivant = *tete;
		if (*tete != NULL){
			(*tete) -> precedent = nouveau;
		}
		*tete = nouveau;
	} else {
		ListeDouble* courant = *tete;
		while (courant -> suivant != NULL && courant -> suivant -> valeur < valeur){
			courant = courant -> suivant;
		}
		nouveau -> suivant = courant -> suivant;
		nouveau -> precedent = courant;
		if (courant -> suivant != NULL){
			courant -> suivant -> precedent = nouveau;
		}
		courant -> suivant = nouveau;
	}
}

// fonction pour inserer un element en tete et en queue dans une liste simplement chainee circulaire

void insererListeSimpleCirculaire(ListeSimpleCirculaire** tete, int valeur, int position){
	ListeSimpleCirculaire* nouveau = (ListeSimpleCirculaire*)malloc(sizeof(ListeSimpleCirculaire));
	nouveau -> valeur = valeur;
	
	if (*tete == NULL){
		*tete = nouveau;
		nouveau -> suivant = *tete;
	} else if (position == 0) {
		// insertion en tete
		ListeSimpleCirculaire* dernier = *tete;
		while (dernier -> suivant != *tete){
			dernier = dernier -> suivant;
		}
		nouveau -> suivant = *tete;
		*tete = nouveau;
		dernier -> suivant = *tete;
	} else {
		// insertion en queue
		ListeSimpleCirculaire* courant = *tete;
		while (courant -> suivant != *tete){
			courant = courant -> suivant;
		}
		courant -> suivant = nouveau;
		nouveau -> suivant = *tete;
	}
}

//fonction pour inserer un element en tete et en queue dans une liste doublement chainee circulaire

void insererListeDoubleCirculaire(ListeDoubleCirculaire** tete, int valeur, int position){
	ListeDoubleCirculaire* nouveau = (ListeDoubleCirculaire*)malloc(sizeof(ListeDoubleCirculaire));
	nouveau -> valeur = valeur;
	
	if (*tete == NULL){
		*tete = nouveau;
		nouveau -> suivant = *tete;
		nouveau -> precedent = *tete;
	} else if (position == 0) {
		// insertion en tete
		ListeDoubleCirculaire* dernier = *tete;
		while (dernier -> suivant != *tete){
			dernier = dernier -> suivant;
		}
		nouveau -> suivant = *tete;
		(*tete) -> precedent = nouveau;
		*tete = nouveau;
		dernier -> suivant = *tete;
	} else {
		// insertion en queue
		ListeDoubleCirculaire* courant = *tete;
		while (courant -> suivant != *tete){
			courant = courant -> suivant;
		}
		courant -> suivant = nouveau;
		nouveau -> precedent = courant;
		nouveau -> suivant = *tete;
		(*tete) -> precedent = nouveau;
	}
}

void afficherListeSimple(ListeSimple* tete){
	ListeSimple* courant = tete;
	while (courant != NULL){
		printf("%d ", courant -> valeur);
		courant = courant -> suivant;
	}
	printf("\n");
}

void afficherListeDouble(ListeDouble* tete){
	ListeDouble* courant = tete;
	while (courant != NULL){
		printf("%d ", courant -> valeur);
		courant = courant -> suivant;
	}
	printf("\n");
}
	
void afficherListeSimpleCirculaire (ListeSimpleCirculaire* tete) {
	ListeSimpleCirculaire* courant = tete;
	do {
		printf("%d ", courant -> valeur);
		courant = courant -> suivant;
	} while (courant != tete);
	printf("\n");
}

void afficherListeDoubleCirculaire (ListeDoubleCirculaire* tete) {
	ListeDoubleCirculaire* courant = tete;
	do {
		printf("%d ", courant -> valeur);
		courant = courant -> suivant;
	} while (courant != tete);
	printf("\n");
}

