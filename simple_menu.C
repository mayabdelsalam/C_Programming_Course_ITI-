

				#include<stdio.h>
				#include<conio.h>
				#define up           72
				#define down         80
				#define enter_button 13
				#define name_page     1
				#define ID_page       2
				#define address_page  3
				
				void main_page(void);
				void Extra_page (int);
				
				
				void main(void)
				{
				  while(1)
				  {
				   char press, press1, index = 1;
				   main_page();

				   press = getch();
				   if(press == enter_button)
				   {
					if(index < 4)
					{
					 Extra_page(index);
					 press = getch();
					 if(press == enter_button)
					  main_page();
					}
				   }
				   if(press == NULL)
				   press = getch();
				   switch(press)
				   {
					case down:
					 index++;
					 gotoxy(1,index);
					 press = getch();
					 while(press != enter_button)
					 {
					  press = getch();
					  if(press == down)
					  {
					   index++;
					   gotoxy(1,index);
					   press = getch();
					   if(index == 4)
					   {
						 index = 0;
					   }
					  }
					  else if(press == up)
					  {
					   index--;
					   gotoxy(1,index);
					   press=getch();
					   if(index == 0)
					   {
						index = 4;
					   }
					  }
					 }
					 if(press == enter_button)
					  Extra_page(index);
					 break;
					case up:
					 if(index == 1)
					   index = 4;
					 else
					  index--;
					 gotoxy(1, index);
					 press = getch();
					 while(press != enter_button)
					 {
					  if(press == down)
					  {
					   if(index == 4)
						index = 1;
					   index++;
					   gotoxy(1, index);
					   press = getch();
					  }
					  else if(press == up)
					  {
					   if(index == 1)
						index = 4;
					   else
						index--;
					   gotoxy(1, index);
					   press=getch();
					   if(index == 1)
					   {
						index = 4;
					   }
					  }
					 }
					 if( (press == enter_button) && (index < 4) )
					  Extra_page(index);
					 break;
				   }
				  press = getch();
				   if( (Extra_page == 4) && (press == enter_button) )
					break;
				  }
				}
				
				
				 void main_page(void)
				 {
				   clrscr();
				   flushall();
				   printf("names");
				   printf("\nIDs");
				   printf("\naddress");
				   printf("\nexit");
				   gotoxy(1,1);
				 }
				 
				 
				 
				 void Extra_page (int index)
				 {
				  switch (index)
				  {
					case name_page:
					 clrscr();
					 printf("this is the names page\nAhmed\nMohammed");
					 break;
					case ID_page:
					 clrscr();
					 printf("this is the ID page\n1234\n4567");
					 break;
					case address_page:
					 clrscr();
					 printf("this is the address page\nalex\ncairo");
					 break;
				  }
				 }