#include "ft_printf.h"

 int main()
 {
    char i[] = "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
    char t = 'd';
    int  tt = 6543;
    int  ttt = -87654;
    long    v = 657765456884321;
    long  vv = -876543;
    int *d;
    long w = 7654324567;
    long x = -7654323456;
    int a = ft_printf("had printf m9aaawda ; MAKATKHSRCH , Saaliha for ever tangolik .\n%s\n%c\n%d\n%d\n%i\n%i\n%u\n%u\n%p\n%x\n%x\n%X\n%X\n",i,t,tt,ttt,tt,ttt,v,vv,&d,w,x,w,x);
    printf("%d\n",a);
 }