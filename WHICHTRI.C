/*AUTHOR = Fennie Tatmiya
  DOC    = June 27, 2026
  OBJ    = Type of Triangle
*/#include<stdio.h>
  #include<conio.h>
  void main() {
  int x;
  int y;
  int z;
  int sum;
  clrscr();

  printf("Enter a value for x = ");
  scanf("%d",&x);

  printf("Enter a value for y = ");
  scanf("%d",&y);

  printf("Enter a value for z = ");
  scanf("%d",&z);

  if(x==y && y==z)
	printf("This is an equilateral  triangle...");

  else if (x==y | y==z | z==x)
	 printf("This in an isosceles triangle...");

   else
      printf("This is a scalene triangle...");



  getch();  }
