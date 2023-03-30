#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array
 * @a: parameter 1
 * @n: parameter 2
 *
 * Retrun no return
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *begin, *end;
	int tmp = 0;

	begin = a;
	end = a;
	n -= 1;

	while (i < n)
		i += 1;
	while (j <= i)
	{
		tmp = *(begin + j);
		*(begin + j) = *(end + i);
		*(end + i) = tmp;
		j++;
		i--;
	}
}
