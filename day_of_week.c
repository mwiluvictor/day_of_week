#include <stdio.h>
#include <string.h>

int  a, b, d, m, y;
int i, sum, new, n_sum;

int month_sum(int);
int century_sum(int);
void day_of_week(int);

int main()
{
	printf("Input the date in the format dd-mm-yyyy :\n");
 	scanf("%d-%d-%d", &d, &m, &y);

	a = y % 100;
	b = y / 100;
	sum =	a + a/4 + d;
	
	century_sum(b);

	i = new%7;

	day_of_week(i);

	return 0;
}


int month_sum(int)
{
	if(((m == 1) && (((y%4 == 0) && (y%100 != 0)) || (y%400 == 0 ))) || (m == 4) || (m == 7)) 
		n_sum = sum;
	else if(m == 1 || m == 10)
		n_sum  = sum + 1;
	else if(m == 2 || m == 3 || m == 11)
		n_sum = sum + 4;
	else if(m == 5)
		n_sum = sum + 2;
	else if(m == 6)
		n_sum = sum + 5;
	else if(m == 8)
		n_sum = sum + 3;
	else if(m == 9 || m == 12)
		n_sum = sum + 6;
	else 
		printf("Wrong format, please try again!!");
	
	return n_sum;
		
}


int century_sum(int)
{	
	month_sum(m);

	if(b == 17)		
		new = n_sum + 4;
	else if(b == 18)
	 	new = n_sum + 2;
	else if(b == 19)
		new = n_sum;
	else if(b == 20)
		new = n_sum + 6;
	else
		printf("Wrong format, please try again!!");

	return new;

}

void day_of_week(int)
{
	printf("THE DAY OF THE WEEK OF %d-%d-%d : ", d, m, y);
	
	if(i == 0)
		printf("Saturday");
	else if(i == 1)
		printf("Sunday");
	else if(i == 2)
		printf("Monday");
	else if(i == 3)		
		printf("Tuesday");
	else if(i == 4)
		printf("Wednesday");
	else if(i == 5)
		printf("Thursday");
	else 
		printf("Friday");
		
}


