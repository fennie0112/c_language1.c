/*AUTHOR =  Fennie Tatmiya
  DOC    =  June 28, 2026
  OBJ    =  Tables
  */#include<stdio.h>
    #include<conio.h>
    void main()
    {
    int i;
    int j;
    int n;
    clrscr();

    printf("enter a number = ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
       printf("\nTable of %d",i);

      for(j=1; j<=10; j++)
      {
      printf("\n%d x %d =%d",i, j, i*j);

	}
	}
	getch();
	}


