#include<stdio.h>

#include"cs50.h"

int main(void)
{
      int lenght = get_int("how many numbers? ");
      int scores[lenght];
      int result = 0;
      for (int i = 0; i < lenght; i++)
      {
            scores[i] = get_float("enter your %i namber: ",i);
            result += scores[i];
      }
      printf("your average is :%.2hf\n",result/(float)lenght);
      
      
}
