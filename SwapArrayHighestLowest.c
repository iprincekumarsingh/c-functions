#include <stdio.h>
int swap(int array[], int size)
{
    int highestIndex = 0,lowestIndex = 0,lowest = array[0],highest = array[0];
    for (int i = 0; i < size; i++)
    {
        if (highest < array[i])
        {
            highestIndex = i;
            highest = array[i];
        }
          if (lowest > array[i])
        {
            lowestIndex = i;
            lowest = array[i];
        }
    }

   array[lowestIndex]=highest;
   array[highestIndex]=lowest;
}
