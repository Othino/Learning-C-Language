/*Program that derwemines eligibility to vote*/

#include<stdio.h>
int main()
{
      int num;
      printf("Enter your age: ");
      scanf("%d", &num);
      if (num <18)
      {
             printf("you are not eligible for voting");
      }
      else
      {
             printf("You can vote!!");
      }
      return 0;
}
