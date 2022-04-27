#include <iostream>
#include <stdio.h>
#iclude <string.h>

using namespace std;

int main()
{
    char str[15], sr;
    int i, freq=0,flag=0;
  printf("Good morning world");
  gets(str);
  
  printf("World: ");
  scanf("%s", &sr);
  
  for(i = 0; i < 15; i++)
  {
    if(i) == sr
    {
      flag = 1;
      printf("At position %d ", i + 1);
      fre++;
    }
  }
  if(flag == 1)
  {
    printf("\n Character '%c'Occured%dTimes\n", sr, freq);
    
  }
  else
  {
    printf("Character not found:");
  }
}
