/*AUTHOR = Fennie Tatmiya
  DOC    = June 30, 2026
  OBJ    = Skip 3-3 alphabet
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char ch='a';
    clrscr();
    do{
		printf("\t%c",ch);
		ch+=4;
       }
    while(ch<='z');
    getch();
}

