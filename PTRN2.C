/*AUTHOR =  Fenni,e Tatmiya
  DOC    =  June
  OBJ    = to pattern
 */ #include<stdio.h>
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
		 printf(" %d",i);
	}
	printf("\n");
    }
    getch();
    }
