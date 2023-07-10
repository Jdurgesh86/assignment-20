#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int x = 5;
    int *a, **b, ***c, ****d, *****e;
    a = &x;
    b = &a;
    c = &b;
    d = &c;
    e = &d;
    printf(" :- %d  %d  %d  %d  %d  ", *a, **b, ***c, ****d, *****e);
    printf("\n :- %d  %d  %d  %d  %d  ", a, b, c, d, e);
    printf("\n :- %d  %d  %d  %d  %d  ", &a, &b, &c, &d, &e);
}