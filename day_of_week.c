#include <stdio.h>

int main()
{
	int  a, b, d, m, y;
	int i, sum, new, n_sum;
	printf("OBTAIN THE DAY OF THE WEEK OF A GIVEN DATE:\n\n"); 
	printf("PLEASE ENTER THE DATE IN THE FORMAT DD-MM-YYYY:\n"); 
	printf("(Note -- the date should not be before 01-01-1700)\n");
  scanf("%d-%d-%d", &d, &m, &y);

	a = y % 100;
	b = y / 100;
	sum =	a + a/4 + d;
	
	if((m == 4) || (m == 7) || (m == 1 && (y%4 == 0 && y%100 != 0 || y&400 == 0 )))
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

	
	i = new%7;
	printf("THE DAY OF THE WEEK OF %d-%d-%d : ", d, m, y);

	if(i==0)
		printf("SATURDAY");
	else if(i==1)
		printf("SUNDAY");
	else if(i==2)
		printf("MONDAY");
	else if(i==3)
		printf("TUESDAY");
	else if(i==4)
		printf("WEDNESDAY");
	else if(i==5)
		printf("THURSDAY");
	else
		printf("FRIDAY");


	return 0;
}

