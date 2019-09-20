#include <stdio.h>
#include <stdlib.h>

int main()
{
  int queue[5],ch,front,rear,v;
  while(1)
   {

    printf("%d,1.create 2.remove 3.exit");
   }
  {
      printf("\n Make a choice",&ch);
        scanf("%d",&ch);
        }
  switch(ch)
    case 1:
        if(rear==4)
        {
            printf("\n overflow");
        }
        else
         {  rear=rear+1;
             printf("\n,rear");
        scanf("%d",&rear);
        }
        switch(ch)
        case 2:
        if (front==rear)
        {
            printf("\n underflow");
        }
        else
            printf("%d",&front);
        {
            front=front+1;
            printf("%d",&front);
        }
        switch(ch)
        case 3:
            exit(ch);


}
