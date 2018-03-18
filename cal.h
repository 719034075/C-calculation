/*
** Update time:2018-03-16 18:32:18
** Update author:Zeuc
** Description:Addition, subtraction, multiplication, division,square, square root of two numbers.
*/

#ifndef cal_h
#define cal_h

#include "as.h"
#include "md.h"
#include "sr.h"

typedef struct CAL{
	AS cal_as;
	MD cal_md;
	SR cal_sr;
}CAL;

/*Initialization function*/
AS init_as();
MD init_md();
SR init_sr();
CAL init_cal();



void calculation(double a, double b,CAL* cal);
void print_result(CAL* cal);

#endif