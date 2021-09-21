#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


/**
* sort_by_digits - sorts integers by certain digits.
*
* @array: the array.
* @size: the size of the array.
* @idx: the index.
*/
void sort_by_digits(int *array, int size, int idx)
{
int j, ii, jj, tmp, x, i = 0;


while (i < size)
{
j = (array[i] / idx) % 10;
ii = i;
while (ii < size)
{
jj = (array[ii] / idx) % 10;
if (j > jj)
{
tmp = array[ii];
for (x = ii - 1; x >= i; x--)
{
array[x + 1] = array[x];
}
array[i] = tmp;
i = -1;
break;
}
ii++;
}
i++;
}
}

/**
* radix_sort - sorts an array in ascending order using  Radix sort algorithm.
*
* @array: the array.
* @size: the size of the array.
*/
void radix_sort(int *array, size_t size)
{
int  i, x = 1, max = 0;

if (array == NULL || size < 2)
return;


for (i = 0; i < (int)size; i++)
{
if (array[i] > max)
max = array[i];
}


while ((max / x) > 0)
{
sort_by_digits(array, size, x);
print_array(array, size);
x *= 10;
}
}