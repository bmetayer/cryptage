#include <stdio.h>
#include <stdlib.h>

char    *takeStringUser() // Lecture de l'entrée utilisateur par la fonction fgets
{
  char	*UserInput;

  printf("Enter which is to be encrypted \n");
  fgets(UserInput, 200, stdin);
  return (UserInput);
}

/* 
    Mettre en place le traitement des majuscules.
*/

int	main()
{
  char	*UserChoice;
  char	*UserInput;

  UserChoice = displayMenu();
  UserInput = takeStringUser();
  switch(atoi(UserChoice))
    {
    case 1:
      EncryptionNormal(UserInput);
      break;
    case 2:
      break;
    default:
      break;
    }
  return (0);
}
