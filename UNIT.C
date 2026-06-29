/*AUTHOR = Fennie Tatmiya
  DOC    = June 26, 2026
  OBJ    = electricity bill
  */#include<stdio.h>
    #include<conio.h>
    void main() {
    int unit;
    clrscr();

    printf("Enter Unit consumed = ");
    scanf("%d",&unit);

     if (unit<=200)
    printf("\nAmount Charges 1.20 per unit/- = %f",unit*1.20);


    else if(unit>200 && unit<=400)
    printf("\nAmount Charges 1.50 per unit/- = %f",unit*1.50);

    else if(unit>400 && unit<=600)
    printf("\nAmount Charges 1.80 per unit/- = %f",unit*1.80*15/100);

    else
    printf("\nAmount charges 2.00 per unit/- = %f",unit*2.00*15/100);

      getch();
      }

