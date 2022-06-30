#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>



int main (void)
{
   char text[] = "123456";
   char results[6];

   // copy text array to results array
   for (int i = 0, n = strlen(text); i < n; i++)
   {
      results[i] = text[i];
      printf("将text中的%c赋予results中的%c\n", text[i], results[i]);

   }
   // results的长度
   printf("results的长度是%lu\n", strlen(results));
   printf("results的结果是%s", results);

}


