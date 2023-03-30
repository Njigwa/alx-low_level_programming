#include "main.h"
/**
 * _abs - A function that computes the absolute value
 *
 * @x: parameter to be checked
 *
 * Return Always x
 */

int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}
