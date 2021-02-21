#include <stdio.h>

int main()
{
  int my_list[9]={1,2,32,8,17,19,42,13,0};
  int my_key = 3;
  int i;
  for (i = 0; i < sizeof(my_list); i++)
  {
    if (my_list[i] == my_key)
    {
      printf("%d found at location %d", my_key, i+1);
      return 0;
    }
  }
  printf("%d not found in the array\n", my_key);
  return 0;
}
