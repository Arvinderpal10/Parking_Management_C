#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int Menu();
void Bus();
void Cycle();
void Car();
void ShowDetails();
void Delete();

int nocy=0,nob=0,noc=0,amount=0,count=0;
void main()
{
    while(1)
	{

    switch(Menu())
{
   case 1:
       Bus();
       break;

   case 2:
       Car();
       break;
   case 3:
       Cycle();
       break;
   case 4:
       ShowDetails();
       break;
   case 5:
       Delete();
       break;
   case 6:
       exit(0);
   default:
    printf("Invalid choice");
}
    getch();
}
}


int Menu()
{
  int ch;
  printf("\n1.Enter Bus");
  printf("\n2.Enter Car");
  printf("\n3.Enter cycle");
  printf("\n4.Show details");
  printf("\n5.Delete Data");
  printf("\n6.Exit");
  printf("\nEnter the choice : ");
  scanf("%d",&ch);
  return(ch);
}
void ShowDetails()
{
    printf("\nNumber of Bus=%d\n",nob);
    printf("Number of Car=%d\n",noc);
    printf("Number of Cycle=%d\n",nocy);
    printf("Total amount=%d\n",amount);
    printf("Total number of vehicles=%d\n",count);
} 
void Cycle()
{   
    printf("New Cycle entered successfully");
    nocy++;
    amount=amount+50;
    count++;

}
void Bus()
{
   printf("New Bus entered successfully");
   nob++;
   amount=amount+100;
   count++;

}
void Car()
{
    printf("New Car entered successfully");
    noc++;
    amount=amount+200;
    count++;

}
void Delete()
{
	printf("Previous data deleted successfully");
    nocy=0;
    nob=0;
    noc=0;
    amount=0;
    count=0;
}
