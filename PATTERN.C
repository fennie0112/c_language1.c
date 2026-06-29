/*AUTHOR  =  Fennie Tatmiya
  DOC     =  June 29,2026
  OBJ     =  for loop pattern
  */#include<stdio.h>
    #include<conio.h>
    void main()
    {
    int i;
    int j;
    clrscr();

    for(i=1; i<=4; i++)
    {
	for(j=1; j<=i; j++)
	{
		 printf(" *");
	}
	printf("\n");
    }
    getch();
    }
