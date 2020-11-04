#include<stdio.h>
#include<conio.h>
int main()
{
    int ans,ans2;
    int num1,num2[100] ,i=0,v ,r, e, base=2;
    char ans3;


Main:
    printf("#######NUR RATUL######\nWelcome to My Number Transformar.\n");

 Start:
    printf("\nSI no -- \n1.Decimal to other.\n2.Other to decimal\n3.Other to other.\nEnter the si no to get into any converter --\n");
    scanf("%d",&ans);


    //Decimal to Other

    if(ans==1)
    {
        printf("Welcome to Decimal.\nOptions of decimal--\n1.To Binary\n2.To Octal\n3.To HexaDecimal\nEnter Sl no to Get into-----\n");
        scanf("%d",&ans2);
    Decimal:


        if(ans2==1)
         {
            printf("Enter Your Number in decimal:");
            scanf("%d",&num1);

            do
             {
                v=num1/base;
                r=num1%base;
                num2[i]= r;
                num1=v;
                i++;
                if(num1<base)
                 {
                   num2[i]=num1;
                 }

                else if(num1==0)
                 {
                    num2[i]=0;
                 }

               }while(num1>=base);

                printf("Your Given number in Binary is: ");

                while(i>=0)
                {
                    printf("%d",num2[i]);
                    i--;
                }
            }


          else if(ans2==2)
            {

                printf("Enter Your Number in decimal:");
                scanf("%d",&num1);
                printf("Your Given number in Octal is: %o\n",num1);
            }

          else if(ans2==3)
            {

                printf("Enter Your Number in decimal:");
                scanf("%d",&num1);
                printf("Your Given number in Hexadecimal is: %x\n",num1);
            }
            else
             {
                 printf("Please Chose Write one ^-^");
                 goto Decimal;
             }

    }



        //Other To Decimal

  else if(ans==2)
       {
         ToDec:
           printf("Welcome to Other To Decimal.\nOptions of Other to decimal--\n1.From Octal\n2.From Hexadecimal\nEnter Sl no to Get into-----\n");
           scanf("%d",&ans2);


            //Octal to decimal
           if(ans2==1)
            {

                printf("Enter Your Number in Octal:");
                scanf("%o",&num1);
                printf("Your Given number in Decimal is: %d\n",num1);
            }
        //Hexadecimal to decimal
        else if(ans2==2)
            {

                printf("Enter Your Number in Hexadecimal:");
                scanf("%x",&num1);
                printf("Your Given number in Hexadecimal is: %d\n",num1);
            }
            else
             {
                 printf("Please Chose Write one ^-^");
                 goto ToDec;
             }

       }




       //Other to Other

    else if(ans==3)
       {
        Other:
           printf("Welcome to Other.\nOptions of other--\n1.From Octal to Hexadecimal\n2.From Hexadecimal to Octal\nEnter Sl no to Get into-----\n");
           scanf("%d",&ans2);


           if(ans2==1)
            {
                printf("Enter Your Number in Octal:");
                scanf("%o",&num1);
                printf("Your Given number in Hexadecimal is: %x\n",num1);
            }

           else if(ans2==2)
            {

                printf("Enter Your Number in Hexadecimal:");
                scanf("%x",&num1);
                printf("Your Given number in Octal is: %o\n",num1);
            }
            else
             {
                 printf("Please Chose Write one ^-^");
                 goto Other;
             }


    }
    else{
        printf("Please Chose Write one ^-^");
        goto Start;
    }















        printf("\n\nThanks to Allah\nThank you for using my converter.\nAnd thanks to Md. Kamruzzaman vaia to teach us programming.");
        printf("Do you want to use this app again ? y or n--\n");
    Want:
        ans3=getch();
        if(ans3=='y' || ans3=='Y')
        {
            printf("\n\n\n\n");
            goto Main;
        }
        else if(ans3=='n' || ans3=='N')
         {
            printf("Ok, Come again. ^-^");
            printf("\nPress any key to continue--------");
            getch();
         }
         else
          {
            printf("Yoy Typed wrong.\nPlease Type y or n--\n");
            goto Want;
          }

        return 0;
}
