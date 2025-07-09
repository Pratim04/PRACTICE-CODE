#include<stdio.h>
#include<conio.h>

char oton[10][10]={" ","one","two","three","four","five","six","seven","eight","nine"};
char ven[10][10]={"ten","eleven","twelve","thirteen","forteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char ty[10][10]={" ","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

void on(int x)
{
    printf("%s ",oton[x]);
}
void tty(int x)
{
    if(x>9)
    {
        printf("%s ",ven[x-10]);
    }
    else
    on(x);
}
void ttty(int x)
{
    if(x>=20)
    {
        printf("%s ",ty[(x/10)-1]);
        tty(x%10);
    }
    else
    tty(x);    
    
}
void hun(int x)
{
    if(x>=100)
    {
        printf("%shundred ",oton[x/100]);
        ttty(x%100);
    }
    else
    ttty(x);
}
void thou(int x)
{
    if(x>=1000)
    {
        printf("%sthousand ",oton[x/1000]);
        hun(x%1000);
    }
    else
    hun(x);
}
void tthou(int x)
{
    if(x>=10000)
    {
        printf("%sthousand ",ven[(x-10000)/1000]);
        thou(x%1000);
    }
    else
    thou(x);
}
void ttthou(int x)
{
    if(x>=20000)
    {
        printf("%s %sthousand ",ty[(x/10000)-1],oton[(x%10000)/1000]);
        tthou(x%1000);
    }
    else
    tthou(x);
}
void lakh(int x)
{
    if(x>=100000)
    {
        printf("%slakh ",oton[x/100000]);
        ttthou(x%100000);
    }
    else
    ttthou(x);
}
void lakhh(int x)
{
    if(x>=1000000)
    {
        printf("%slakh ",ven[(x-1000000)/100000]);
        lakh(x%100000);
    }
    else
    lakh(x);
}
void llakh(int x)
{
    if(x>=2000000)
    {
        printf("%s %slakh ",ty[(x/1000000)-1],oton[(x%1000000)/100000]);
        lakhh(x%100000);
    }
    else
    lakhh(x);
}
void cr(int x)
{
    if(x>=10000000)
    {
        printf("%scrore ",oton[x/10000000]);
        llakh(x%10000000);
    }
    else
    llakh(x);
}
void cro(int x)
{
    if(x>=100000000)
    {
        printf("%scrore ",ven[(x-100000000)/10000000]);
        cr(x%10000000);
    }
    else
    cr(x);
}
void cror(int x)
{
    if(x>=200000000)
    {
        printf("%s %scrore ",ty[(x/100000000)-1],oton[(x%100000000)/10000000]);
        cro(x%10000000);
    }
    else
    cro(x);
}
int main()
{   
    int i;
    
    printf("Enter the value of i: ");
    scanf("%d",&i);
    cror(i);
    return 0;
}