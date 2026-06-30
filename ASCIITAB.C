/*AUTHOR =  Fennie Tatmiya
  DOC    =  June 30,2026
  OBJ    =  ASCII table
  */
  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int f;
  clrscr();
  printf("Enter a number = ");
  scanf("%d",&f);

  if(f>=65 && f<=90)
  {
	printf("uppercase ");
	}

  else if(f>=97 && f<=122)
  {
	printf("Lowercase");
	}


  else if(f>=47 && f<=57)
  {
	printf("Number");
	}
  else
  {
	printf("special");
	}


  getch();
  }