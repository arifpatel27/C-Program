#include<stdio.h>
#include<conio.h>

int main()
{


        int Num1 = 0, Num2 = 0, Sum = 0;

        printf("\n =========********======= \n");

        printf("\n Enter 2 Numbers for Addition = ");
        scanf("%d %d", &Num1, &Num2);

        Sum = Num1 + Num2;

        printf(" =========**********======== ");

        printf("\n %d + %d =%d", Num1, Num2, Sum);

        printf("\n =========**********========= \n");

        getch();
        return 0;
}
