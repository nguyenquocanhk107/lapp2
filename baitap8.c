#include <stdio.h>
#include <conio.h>
main(){
int a ;
float x;
char y ;
double j;
long int h;
long double k;
printf("kieu int : %d byte \n",sizeof(int));
printf("so nguyen : ");
scanf("%d",&a);
printf("kieu float : %d byte\n",sizeof(float));
printf("so thuc kieu float : ");
scanf("%f",&x);
printf("kieu char : %d\n",sizeof(char));
printf("ky tu : ");
scanf("%c",&y);
printf("kieu double : %d\n",sizeof(double));
printf("so thuc kieu double : ");
scanf("%%lf",&j);
printf("kieu long int : %d\n",sizeof(long int));
printf("kieu long double : %d",sizeof(long double));




 


getch();
}
