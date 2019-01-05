#include <stdio.h>
#include <conio.h>

int a=4;

void getAGlobal(){
printf("A Global adalah %d alamatnya %p\n", a, &a);
}

void fungsi_by_value(int a){
a = a*3;
printf("A by value adalah = %d alamatnya adalah %p\n", a, &a);

}

void main(){
int a = 5;
getAGlobal();
printf("A main adalah = %d alamatnya adalah %p\n",a, &a);
fungsi_by_value(5*a+1);
printf("A main setelah fungsi dipanggil adalah = %d alamatnya adalah %p\n", a, &a);
       _getch();

}
