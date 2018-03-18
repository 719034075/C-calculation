/*
** Update time:2018-03-16 18:14:50
** Update author:Zeuc
** Description:Multiplication and division of two numbers.
*/

#include "md.h"

void md_multiply(double a,double b,MD* md){
	md->result_multiply = a * b;
	return;
}

void md_divide(double a,double b,MD* md){
	md->result_divide = a / b;
	return;
}