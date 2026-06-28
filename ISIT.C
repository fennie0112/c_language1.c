/*AUTHOR =  Fennie Tatmiya
  DOC    =  June 26, 2026
  OBJ    =  Is it Triangle?
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

    sum = x+y+z;

    if(sum==180)
      printf("The Triangle is valid");

      else
	printf("The triangle is not valid");


    getch();
    }