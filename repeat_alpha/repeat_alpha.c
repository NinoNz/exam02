// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>
#include <stdio.h>

// Fonction auxiliaire pour répéter un caractère
void rep_C(char c, int fois) 
{
    // Vérifie si le nombre de répétitions est supérieur à 0
    if (fois > 0) 
	{
        // Affiche le caractère
        putchar(c);
        // Appelle récursivement la fonction pour répéter le caractère le nombre de fois restant
        rep_C(c, fois - 1);
    }
}

// Fonction principale pour répéter les caractères alphabétiques
void repete_alpha(char *str) 
{
    // Vérifie si la chaîne est vide
    if (str == NULL || *str == '\0') 
	{
        // Affiche une nouvelle ligne et quitte la fonction
        putchar('\n');
        return;
    }

    // Prend le premier caractère de la chaîne
    char c = *str;

    // Initialise le nombre de répétitions à zéro
    int nb_rep = 0;

    // Vérifie si le caractère est une lettre minuscule
    if (c >= 'a') 
	{
        // Calcule le nombre de répétitions en fonction de la position dans l'alphabet pour les lettres minuscules
        nb_rep = c - 'a' + 1;
    } else {
        // Calcule le nombre de répétitions en fonction de la position dans l'alphabet pour les lettres majuscules
        nb_rep = c - 'A' + 1;
    }

    // Vérifie à nouveau si le caractère est alphabétique
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
	{
        // Utilise la fonction auxiliaire pour répéter le caractère le nombre de fois calculé
        rep_C(c, nb_rep);
    } else 
	{
        // Si le caractère n'est pas alphabétique, l'affiche tel quel
        putchar(c);
    }

    // Appelle récursivement pour le reste de la chaîne
    repete_alpha(str + 1);
}

int main() 
{
    // Teste la fonction avec une chaîne d'exemple
    char exemple[] = "Bonjour, le Monde !";
    repete_alpha(exemple);

    return 0;
}



