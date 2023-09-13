#include <stdio.h>

int mi_array[] = {1,23,17,4,-5,100};
int *ptr;
int main(void)
{
int i;
    ptr = &mi_array[0];
    printf("\n\n");
    for (i = 0; i < 6; i++)
    {
/* ahora el puntero ptr apunta al
    primer elemento del array */
      printf("mi_array[%d] = %d   ",i,mi_array[i]);   /*<-- A */
      printf("ptr + %d = %d\n",i, *(ptr + i));  /*<-- B */
    }
return 0; 
}