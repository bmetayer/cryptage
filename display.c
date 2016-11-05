#include <stdio.h>
#include <stdlib.h>


char    displayMenu() // Fonction d'affichage du menu
{
  char	UserChoice;

  printf("You can choose an encryption method : \n");
  printf("Choice 1 \n");
  printf("Choice 2 \n");
  fgets(UserChoice, 1, stdin);
  return (UserChoice);
}
