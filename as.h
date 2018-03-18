/*
** Update time:2018-03-16 17:44:24
** Update author:Zeuc
** Description:Addition and subtraction of two numbers.
*/

#ifndef as_h
#define as_h

typedef struct AS{
	double result_add;
	double result_subtract;
}AS;

void as_add(double a,double b,AS* as);
void as_subtract(double a,double b,AS* as);

#endif