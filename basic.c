#include<stdio.h>
int main()
{
   int a=1,b=1,c;
  //  c= a && b;     // 111
  //  printf("a:%d, b:%d, c:%d", a,b,c);
  //   c= --a && b;     // 010
   // printf("a:%d, b:%d, c:%d", a,b,c);
   //  c= --a && ++b;     // 010
  // printf("a:%d, b:%d, c:%d", a,b,c);
   //  c= a && ++b;     // 121
   // printf("a:%d, b:%d, c:%d", a,b,c);
  //   c= ++a && --b;     // 200
   // printf("a:%d, b:%d, c:%d", a,b,c);
   //  c= ++a && ++b;     //221
   // printf("a:%d, b:%d, c:%d", a,b,c);
   //  c= a || b;     //111
   // printf("a:%d, b:%d, c:%d", a,b,c);
  //   c= --a || b;     // 011
  //  printf("a:%d, b:%d, c:%d", a,b,c);
     c= a || --b;     // 111
    printf("a:%d, b:%d, c:%d", a,b,c);
  //    c= a || ++b;     //111
  //  printf("a:%d, b:%d, c:%d", a,b,c);
  //    c= --a || ++b;     // 111
  //  printf("a:%d, b:%d, c:%d", a,b,c);

   // int a=1,b=2,c=1,d;
  //  d=++a && b && c;    //2211
   // printf("a:%d , b:%d, c:%d, d:%d", a,b,c,d);

 //  d=--a && b && c;         //0210
 //   printf("a:%d , b:%d, c:%d, d:%d", a,b,c,d);

  //  d=--a && ++b && c;          //0210
  //   printf("a:%d , b:%d, c:%d, d:%d", a,b,c,d);

  //  d=--a || ++b || c;        //0311
 //  printf("a:%d , b:%d, c:%d, d:%d", a,b,c,d);

  //  d=++a && --b  || c;    //2111
  //  printf("a:%d , b:%d, c:%d, d:%d", a,b,c,d);


}