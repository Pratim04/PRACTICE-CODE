#include<stdio.h>

int main()
{   
    // %wc :-
    printf("Result of wc:-\n");
    printf("\n");

    int x=7657;
    printf("%6d\n",x);
    printf("%4d\n",x);
    printf("%06d\n",x);
    printf("\n");

    // %w.pf :-
    printf("Result of w.pf:-\n");
    printf("\n");

    float y=76.593;
    printf("%f\n",y);
    printf("%6.3f\n",y);
    printf("%6.1f\n",y);
    printf("%08.3f\n",y);
    printf("%8.1ef\n",y);
    printf("%-8.3f\n",y);
    printf("%e\n",-y);
    printf("\n");

    // %w.ps :-
    printf("Result of w.ps:-\n");
    printf("\n");
    char swc[100]="study with care";

    printf("%s\n",swc);
    printf("%16s\n",swc);
    printf("%16.7s\n",swc);
    printf("%8s\n",swc);
    printf("%-16.7s\n",swc);
    printf("\n");
    return 0;
}