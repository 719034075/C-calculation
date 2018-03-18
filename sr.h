/*
** Update time:2018-03-16 18:05:57
** Update author:Zeuc
** Description:Square and square root of two numbers.
*/

#ifndef sr_h
#define sr_h

typedef struct SR{
	double result_square;
	double result_root_a;
	double result_root_b;
}SR;

void sr_square(double a,double b,SR* sr);
void sr_root(double a,double b,SR* sr);

#endif