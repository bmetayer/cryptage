#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char    *displayMenu() // Fonction d'affichage du menu
{
  char	*UserChoice;

  printf("You can choose an encryption method : \n");
  printf("Choice 1 \n");
  printf("Choice 2 \n");
  return (UserChoice);
}

char	my_putchar(char c)
{
  write(1, &c, 1);
}

char	my_putstr(char *MessageCrypted)
{
  int	idx = 0;

  while (MessageCrypted[idx] != 0)
    my_putchar(MessageCrypted[idx++]);
}
