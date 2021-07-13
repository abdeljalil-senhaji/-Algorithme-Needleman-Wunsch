# -Algorithm-Needleman-Wunsch
-----------------------------------------------------------------------------------------------------------------

## Bibliographic overview

The Needleman - Wunsch algorithm is an algorithm used in bioinformatics to align protein or nucleotide sequences. It was one of the first applications of dynamic programming to compare biological sequences. The algorithm was developed by Saul B. Needleman and Christian D. Wunsch and published in 1970. [1] The algorithm essentially divides a large problem (eg the complete sequence) into a series of smaller problems, and it uses solutions to smaller problems to find an optimal solution to the larger problem. [2] It is also sometimes called the optimal matching algorithm and the global alignment technique. The Needleman - Wunsch algorithm is still widely used for optimal overall alignment, especially when the quality of the overall alignment is of the utmost importance. The algorithm assigns a score to each possible alignment, and the goal of the algorithm is to find all possible alignments with the highest score.

## Principle :

This algorithm was originally developed to align two protein sequences. Let A and B be two sequences of length m and n. The algorithm constructs a two-dimensional array (m, n) called a comparison matrix.

- In a first step, this matrix is ​​assigned the appropriate values ​​according to the elementary score matrix chosen. We thus obtain an initial comparison matrix.

- Then in a second step, the matrix is ​​transformed by adding scores. This is done line by line starting with the lower right corner and ending with the upper left corner as this is a global alignment.

The goal is then to find the best overall alignment, from the transformed matrix. For this, a path is established in the matrix which corresponds to the passage of the highest sum scores, this by allowing three possible types of movements and taking as a starting point the maximum score present in the transformed matrix. Needleman and Wunsch call this passage the path of maximum scores.

## Code langage C :

Summarizes the 3 steps of the algorithm:

• Matrix initialization
• Fill in the matrix
• Matrix display


Program creates a global alignment of two user-entered sequences.

Using the Needleman-Wunsch algorithm, on a 2-dimensional matrix, and a matrix of scores is returned to the user.

## Pour exécuter correctement ce programme : 

`` gcc  Code-AlgoNW.c  -o exucutable-programme ``

Ce programme a été conçu pour afficher une matrice NW sur l'écran au moment de l'exécution.




## Bibliographie : 
[1] Needleman, Saul B. et Wunsch, Christian D. (1970). "Une méthode générale applicable à la recherche de similitudes dans la séquence d'acides aminés de deux protéines". Journal de biologie moléculaire. 48 (3): 443–53. doi : 10.1016 / 0022-2836 (70) 90057-4 . PMID  5420325.

[2] "bioinformatique" . Récupéré le 10 septembre 2014.
