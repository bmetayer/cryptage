#include <stdio.h>
#include <stdlib.h>

char	*displayMenu();
char	*EncryptionNormal(char *UserInput);
char	my_putstr(char *MessageCrypted);

char    *takeStringUser() // Lecture de l'entrée utilisateur par la fonction fgets
{
  char	*UserInput;

  UserInput = malloc(200);
  UserInput[199] = '\0';
  printf("Enter what is to be encrypted \n");
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
  char	*MessageCrypted;
  
  UserChoice = displayMenu();
  UserInput = takeStringUser();
  switch(atoi(UserChoice))
    {
    case 1:
      MessageCrypted = EncryptionNormal(UserInput);
      my_putstr(MessageCrypted);
      free(UserInput);
      break;
    case 2:
      break;
    default:
      break;
    }
  return (0);
}
