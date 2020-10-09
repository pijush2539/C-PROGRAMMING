#include <stdio.h>
#include <conio.h>
int bal=0,another;
int bank()
{
  int ch;
  printf("\n -------WELCOME TO MY BANK-------");
  printf("\nEnter you choice:");
  printf("\n 1.Deposit..");
  printf("\n 2.Withdraw..");
  scanf("\n%d",&ch);
  switch(ch)
  {
    case 1:
      deposit();
      break;
    case 2:
      withdraw();
      break;
    case 3:
      printf("\n Thank you..");
    default:
      printf("\nWrong choice");
  }
  return 0;
}
int deposit()
{
  int dep_amt;
  printf("Enter amount for deposit:");
  scanf("%d",&dep_amt);
  bal=bal+dep_amt;
  printf("\nThe new balance is:%d",bal);
  printf("\nDo you want to continue process..?\n Press '1'to continue and press '2' to exit ");
  scanf("%d",&another);
  if(another==1)
  {
    bank();
  }
  else
  {
    printf("\n Thank you for transaction.");
  }
  return 0;
}
int withdraw()
{
  int wid_amt,lower=1000;
  printf("\n Enter amount to withdrawn:");
  scanf("%d",&wid_amt);
  if(wid_amt>bal)
  {
    printf("\n Transaction not possible...");
  }
  else
  {
    bal=bal-wid_amt;
    if(bal>lower)
    {
      printf("\n New balance after withdraw:%d",bal);
    }
    else
    {
      printf("\n Insufficient balance..");
    }
  }
  printf("\nDo you want to continue process..\n Press '1'to continue and press '2' to exit ");
  scanf("%d",&another);
  if(another==1)
  {
    bank();
  }
  else
  {
    printf("\n Thank you for transaction.");
  }
  return 0;
 }
 int main()
 {
   bank();
   return 0;
   getch();
 }
