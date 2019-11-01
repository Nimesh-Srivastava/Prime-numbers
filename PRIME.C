#include<stdio.h>
#include<conio.h>

int main()
{
	int num,i=1,j=0,check,extr=1,count=0,*n,*i1,*j1,*c,*e,*cnt;
	clrscr();
	printf("\nEnter a number : ");
	scanf("%d",&num);
	n=&num,	e=&extr, j1=&j, c=&check, i1=&i, cnt=&count;
	printf("\n\nThe prime number(s) till %d are :-\n",*n);
	while(*e<=*n)
	{
		while(*i1<=*e)
		{
			*c=*e%*i1;
			if(*c!=0)
			{
				(*i1)++;
			}
			else
			{
				(*j1)++;
				(*i1)++;
			}
		}
		if((*j1)==2)
			{
				printf("\n%d",*e);
				(*cnt)++;
			}
		*i1=1;
		*j1=0;
		(*e)++;
	}
	printf("\n\nThere are total %d prime numbers listed above",*cnt);
	getch();
	return 0;
}