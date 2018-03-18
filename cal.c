/*
** Update time:2018-03-16 18:32:18
** Update author:Zeuc
** Description:Addition, subtraction, multiplication, division,square, square root of two numbers.
*/


#include <stdio.h>

#include "cal.h"
#include "as.h"
#include "md.h"
#include "sr.h"

/*Initialization function*/
AS init_as(){
	AS as;

	as.result_add = 0;
	as.result_subtract = 0;

	return as;
}

MD init_md(){
	MD md;

	md.result_multiply = 0;
	md.result_divide = 0;

	return md;
}

SR init_sr(){
	SR sr;

	sr.result_square = 0;
	sr.result_root_a = 0;
	sr.result_root_b = 0;

	return sr;
}

CAL init_cal(){
	CAL cal;

	AS as = init_as();
	MD md = init_md();
	SR sr = init_sr();

	cal.cal_as = as;
	cal.cal_md = md;
	cal.cal_sr = sr;

	return cal;
}

void calculation(double a, double b,CAL* cal){
	as_add(a,b,&(cal->cal_as));
	as_subtract(a,b,&(cal->cal_as));
	md_multiply(a,b,&(cal->cal_md));
	md_divide(a,b,&(cal->cal_md));
	sr_square(a,b,&(cal->cal_sr));
	sr_root(a,b,&(cal->cal_sr));
	return;
}

void print_result(CAL* cal){
	printf("a + b = %lf\n",cal->cal_as.result_add);
	printf("a - b = %lf\n",cal->cal_as.result_subtract);
	printf("a * b = %lf\n",cal->cal_md.result_multiply);
	printf("a / b = %lf\n",cal->cal_md.result_divide);
	printf("a ^ b = %lf\n",cal->cal_sr.result_square);
	printf("sqrt(a) = %lf\n",cal->cal_sr.result_root_a);
	printf("sqrt(b) = %lf\n",cal->cal_sr.result_root_b);
	return;
}