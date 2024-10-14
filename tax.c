#include <stdio.h>
#define _CRT_RECURE_NO_WARNINGS

int main(void) 
{
    long tax_base, tax_rate, income_tax, progressive_tax, calculated_tax, amount; //과세 표준, 세율, 공제 전 소득세, 누진공제, 산출, 세후 재산

    printf("과세 표준: ");
    scanf("%ld", &tax_base);

    if (tax_base >= 0 && tax_base < 12000000) //세율 측정기
    {
        tax_rate = 6;
        printf("\n소득세율: %ld%%", tax_rate);
    }
    else if(tax_base >= 12000000 && tax_base < 46000000)
    {
        tax_rate = 15;
        printf("\n소득세율: %ld%%", tax_rate);
    }
    else if(tax_base >= 46000000 && tax_base < 88000000)
    {
        tax_rate = 24;
        printf("\n소득세율: %ld%%", tax_rate);
    }
    else if(tax_base >= 88000000 && tax_base < 150000000)
    {
        tax_rate = 35;
        printf("\n소득세율: %ld%%", tax_rate);
    }
    else if(tax_base >= 150000000 && tax_base < 300000000)
    {
        tax_rate = 38;
        printf("\n소득세율: %ld%%", tax_rate);
    }
    else if(tax_base >= 300000000 && tax_base < 500000000)
    {
        tax_rate = 40;
        printf("\n소득세율: %ld%%", tax_rate);
    }
    else if(tax_base >= 500000000 && tax_base < 1000000000)
    {
        tax_rate = 42;
        printf("\n소득세율: %ld%%", tax_rate);
    }
    else if(tax_base >= 1000000000)
    {
        tax_rate = 45;
        printf("\n소득세율: %ld%%", tax_rate);
    }
    else
        printf("\n소득세율 산출 불가");

    income_tax = tax_base * tax_rate / 100;
    printf("\n(공제전)소득세: %ld\n", income_tax);

    switch (tax_rate)  //세율에 따른 누진공세액 결정
    { 
        case 6: progressive_tax = 0; printf("누진공세액: %ld", progressive_tax); break;
        case 15: progressive_tax = 1080000; printf("누진공세액: %ld", progressive_tax); break;
        case 24: progressive_tax = 5220000; printf("누진공세액: %ld", progressive_tax); break;
        case 35: progressive_tax = 14900000; printf("누진공세액: %ld", progressive_tax); break;
        case 38: progressive_tax = 19400000; printf("누진공세액: %ld", progressive_tax); break;
        case 40: progressive_tax = 25400000; printf("누진공세액: %ld", progressive_tax); break;
        case 42: progressive_tax = 35400000; printf("누진공세액: %ld", progressive_tax); break;
        case 45: progressive_tax = 65400000; printf("누진공세액: %ld", progressive_tax); break;
        default: progressive_tax = 0; printf("누진공세액 산출 불가"); break;           
    }

    calculated_tax = income_tax - progressive_tax;
    printf("\n산출세액: %ld", calculated_tax);

    amount = tax_base - calculated_tax; //세후 재산 단위별로 표시 요망
    printf("\n세후 재산: %ld", amount);

    return 0;
}