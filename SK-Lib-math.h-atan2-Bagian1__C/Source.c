/* atan2 example */
#include <stdio.h>      /* printf */
#include <math.h>       /* atan2 */
#include <conio.h>		/* _getch()*/

/*	Source by CPlusPlus
	Modified for Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

#define PI 3.14159265

int main() {
	double x, y, result;

	x = -10.0;
	y = 10.0;
	
	result = atan2(y, x) * 180 / PI;
	printf("The arc tangent for (x=%f, y=%f) is %f degrees\n", x, y, result);

	_getch();
	return 0;
}