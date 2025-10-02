#ifndef _LISTE_H
#define _LISTE_H

#include <stdio.h>
#include <stdlib.h>



// structure pour representer une liste simplement chainee
typedef struct ListeSimple {
	int valeur;
	struct ListeSimple* suivant;
} ListeSimple;


// structure pour represente une liste doublement chainee

typedef struct ListeDouble {
	int valeur;
	struct ListeDouble* suivant;
	struct ListeDouble* precedent;
} ListeDouble;

// structre pour representer une liste simplement chainee circulaire

typedef struct ListeSimpleCirculaire {
	int valeur;
	struct ListeSimpleCirculaire* suivant;
}  ListeSimpleCirculaire;

// structre pour representer une liste doublement chainee circulaire

typedef struct ListeDoubleCirculaire {
	int valeur;
	struct ListeDoubleCirculaire* suivant;
	struct ListeDoubleCirculaire* precedent;
} ListeDoubleCirculaire;

void supprimerOccurences(ListeSimple** tete, int valeur);
void insererListeSimpleTrie(ListeSimple** tete, int valeur);
void insererListeDoubleTrie (ListeDouble** tete, int valeur);
void insererListeSimpleCirculaire(ListeSimpleCirculaire** tete, int valeur, int position);
void insererListeDoubleCirculaire(ListeDoubleCirculaire** tete, int valeu, int position);
void afficherListeSimple(ListeSimple* tete);
void afficherListeSimpleCirculaire (ListeSimpleCirculaire* tete);
void afficherListeDoubleCirculaire (ListeDoubleCirculaire* tete);
void afficherListeDouble(ListeDouble* tete);
#endif
