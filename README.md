 

# README

## Description

Ce programme en C permet de gérer plusieurs types de listes chaînées : 
- Liste simplement chaînée
- Liste doublement chaînée
- Liste simplement chaînée circulaire
- Liste doublement chaînée circulaire

Il permet à l'utilisateur d'ajouter des éléments à ces listes, de les afficher et de supprimer des occurrences d'une valeur spécifique.

## Compilation

Pour compiler le programme, assurez-vous d'avoir un compilateur C installé (comme GCC). Utilisez la commande suivante :

gcc main.c -o liste_program -I.

## Utilisation

1. Exécutez le programme :

   ./liste_program

2. Entrez le nombre d'éléments à ajouter aux listes.

3. Pour chaque élément, entrez la valeur souhaitée.

4. Le programme affichera les listes triées après chaque insertion.

5. Vous aurez également la possibilité de supprimer toutes les occurrences d'une valeur spécifique dans la liste simplement chaînée.

## Fonctions principales

- `insererListeSimpleTrie` : Insère un élément dans la liste simplement chaînée de manière triée.
- `insererListeDoubleTrie` : Insère un élément dans la liste doublement chaînée de manière triée.
- `insererListeSimpleCirculaire` : Insère un élément dans la liste simplement chaînée circulaire.
- `insererListeDoubleCirculaire` : Insère un élément dans la liste doublement chaînée circulaire.
- `afficherListeSimple` : Affiche les éléments de la liste simplement chaînée.
- `afficherListeDouble` : Affiche les éléments de la liste doublement chaînée.
- `afficherListeSimpleCirculaire` : Affiche les éléments de la liste simplement chaînée circulaire.
- `afficherListeDoubleCirculaire` : Affiche les éléments de la liste doublement chaînée circulaire.
- `supprimerOccurences` : Supprime toutes les occurrences d'une valeur donnée dans la liste simplement chaînée.


## Remarques

Assurez-vous d'inclure le fichier d'en-tête `liste.h`, qui doit contenir les déclarations des fonctions et structures nécessaires au fonctionnement du programme.
