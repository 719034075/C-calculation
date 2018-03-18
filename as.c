/*
** Update time:2018-03-16 18:14:50
** Update author:Zeuc
** Description:Addition and subtraction of two numbers.
*/

#include "as.h"

void as_add(double a,double b,AS* as){
	as->result_add = a + b;
	return;
}

void as_subtract(double a,double b,AS* as){
	as->result_subtract = a - b;
	return;
}
