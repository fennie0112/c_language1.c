/*AUTHOR =  Fennie Tatmiya
  DOC    =  June 30, 2026
  OBJ    =  using continue
  */
  #include<stdio.h>
  #include<conio.h>

  void main() {
  int i;
  clrscr();

  for(i=1; i<=9; i++)
   {
   if(i==5){
	 continue;
	 }
	 printf("\t%d",i);
	 }

  getch();
  }