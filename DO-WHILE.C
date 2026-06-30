/*AUTHOR =  Fennie Tatmiya
  DOC    =  June 3, 2026
  OBJ    =  do-while loop
  */
  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int i;
  i = 1;

  clrscr();

  do
  {
	printf("  %d",i);
	i++;
	}
		while(i<=10);

  getch();
  }