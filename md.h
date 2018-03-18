/*
** Update time:2018-03-16 18:06:14
** Update author:Zeuc
** Description:Multiplication and division of two numbers.
*/

#ifndef md_h
#define md_h

typedef struct MD{
	double result_multiply;
	double result_divide;
}MD;

void md_multiply(double a,double b,MD* md);
void md_divide(double a,double b,MD* md);

#endif