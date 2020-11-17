# -Algorithme-Needleman-Wunsch
-----------------------------------------------------------------------------------------------------------------

## Aperçu bibliographique
L’algorithme Needleman – Wunsch est un algorithme utilisé en bioinformatique pour aligner des séquences protéiques ou nucléotidiques. Ce fut l'une des premières applications de la programmation dynamique pour comparer des séquences biologiques. L'algorithme a été développé par Saul B. Needleman et Christian D. Wunsch et publié en 1970. [1] L'algorithme divise essentiellement un grand problème (par exemple la séquence complète) en une série de problèmes plus petits, et il utilise les solutions aux plus petits problèmes pour trouver une solution optimale au problème plus vaste. [2] On l'appelle aussi parfois l’algorithme de correspondance optimal et letechnique d’alignement global. L'algorithme Needleman – Wunsch est encore largement utilisé pour un alignement global optimal, en particulier lorsque la qualité de l'alignement global est de la plus haute importance. L'algorithme attribue un score à chaque alignement possible, et le but de l'algorithme est de trouver tous les alignements possibles ayant le score le plus élevé.

## Principe :

Cet algorithme a été développé initialement pour aligner deux séquences protéiques. Soit A et B deux séquences de longueur m et n. L'algorithme construit un tableau à deux dimensions (m,n) que l'on appelle matrice de comparaison.

- Dans une première étape, on attribue à cette matrice les valeurs appropriées selon la matrice de scores élémentaires choisie. On obtient ainsi une matrice initiale de comparaison.

- Puis dans une deuxième étape, la matrice est transformée par addition de scores. Cette opération est effectuée ligne par ligne en commençant par le coin droit inférieur et en terminant par le coin gauche supérieur car il s'agit d'un alignement global.

Le but est ensuite de trouver le meilleur alignement global, à partir de la matrice transformée. Pour cela, on établit dans la matrice un chemin qui correspond au passage des scores sommes les plus élevés, ceci en s'autorisant trois types de mouvements possibles et en prenant comme point de départ le score maximum présent dans la matrice transformée. Needleman et Wunsch nomment ce passage le chemin des scores maximum.

## Code en langage C :

Résume les 3 étapes de l’algorithme :

•	Initialisation de la matrice
•	Remplir de la matrice
•	Affichage de la matrice


Programme crée un alignement global de deux séquences entrées par l’utilisateur.

En utilisant l'algorithme Needleman-Wunsch, sur une matrice à 2 dimensions, et une matrice des scores est renvoyée à l'utilisateur.

## Pour exécuter correctement ce programme : 

`` gcc  Code-AlgoNW.c  -o exucutable-programme ``

Ce programme a été conçu pour afficher une matrice NW sur l'écran au moment de l'exécution.




## Bibliographie : 
[1] Needleman, Saul B. et Wunsch, Christian D. (1970). "Une méthode générale applicable à la recherche de similitudes dans la séquence d'acides aminés de deux protéines". Journal de biologie moléculaire. 48 (3): 443–53. doi : 10.1016 / 0022-2836 (70) 90057-4 . PMID  5420325.

[2] "bioinformatique" . Récupéré le 10 septembre 2014.
