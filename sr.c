/*
** Update time:2018-03-16 18:14:50
** Update author:Zeuc
** Description:Square and square root of two numbers.
*/

#include <math.h>

#include "sr.h"

void sr_square(double a,double b,SR* sr){
	sr->result_square = pow(a,b);
	return;
}

void sr_root(double a,double b,SR* sr){
	sr->result_root_a = sqrt(a);
	sr->result_root_b = sqrt(b);
	return;
}