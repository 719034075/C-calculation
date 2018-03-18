#include <stdio.h>

#include "cal.h"

int main(int argc, char const *argv[])
{
	CAL cal = init_cal();
	double a,b;

	scanf("%lf %lf",&a,&b);

	calculation(a,b,&cal);

	print_result(&cal);
	
	return 0;
}