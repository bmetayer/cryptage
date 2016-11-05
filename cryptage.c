#include <stdlib.h>
#include <stdio.h>

char	*ExchangeChar(char *UserInput, int idx)
{
  char	c;

  if (UserInput[idx + 1] != 0)
    {
      c = UserInput[idx];
      UserInput[idx] = UserInput[idx + 1];
      UserInput[idx + 1] = c;
    }
  return (UserInput);
}

int	CheckIndex(char *UserInput, int idx)
{
  if (UserInput[idx + 1] == 0 || UserInput[idx + 2] == 0)
    return (-1);
  else
    return (0);
}

char	*EncryptionNormal(char *UserInput) // Fonction de cryptage
{
  char	*MessageCrypted;
  int	idx = 0;

  while(UserInput[idx] != 0)
    {
      UserInput = ExchangeChar(UserInput, idx);
      if (CheckIndex(UserInput, idx) == 1)
	idx = idx + 2;
    }
  return (MessageCrypted);
}
