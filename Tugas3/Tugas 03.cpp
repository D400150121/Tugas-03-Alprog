#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
float a,b,c,D,x,x1,x2;
printf("   Program Mencari Akar Persamaan Kuadrat   \n");
printf("--- Bentuk Persamaan ax^2 + bx + c = 0 ----- \n");
printf("		Selamat Belajar		 \n");
printf(" Masukan Nilai Koefisien a = ");scanf("%f",&a);
	   if (a == 0) 
        printf ("Bukan Pers. Kuadrat.\n");
printf(" Masukan Nilai Koefisien b = ");scanf("%f",&b);		
printf(" Masukan Nilai Koefisien c = ");scanf("%f",&c);
printf("-------------------------------------------- \n");

D = (b*b)-(4*a*c);
printf(" Diskriminan = %2.2f\n",D);
printf("		Hasilnya adalah	 \n");
if (D>0)
        {x1=((-b+sqrt(D))/(2*a));
                printf(" x1 = %2.2f\n",x1);
         x2=((-b-sqrt(D))/(2*a));
                printf(" x2 = %2.2f\n",x2);}
else if(D==0)
        {x= -b/(2*a);
                printf(" x1 = x2 = %2.2f\n",x);}
else if(D<0)
        {x1=((-b/2*a)+ ((sqrt(-D))/2*a));
                printf(" x1 = %2.2f\n",x1);
         x2=((-b/2*a)-((sqrt(-D) )/2*a));
                printf(" x2 = %2.2f\n",x2);
                printf(" 	Adalah Bilangan Imajiner	 \n");}
printf("--------------------------------------------\n");
printf("   Terima Kasih   \n");
printf("  D400150121 (ELTRUMS)  \n");

getch ();
}


