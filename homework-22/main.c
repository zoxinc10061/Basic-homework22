#include <stdio.h> 

#include <stdlib.h>

struct servitor

{

   char id[8],name[12];

   int hourly_pay,hours,payment;

};

void calc(struct servitor []); 

int main(void)

{

   struct servitor emp[4];

   int i=0;

	   printf("-------------------------------------------------\n");

	   printf("                 ��X�C�ӤH�����J                \n");

	   printf("-------------------------------------------------\n");

   do { 

	   printf("�п�J��%d�쪺�s��,�m�W,���~,�u�@�ɼ�:", i+1); 

       scanf(" %s %s %d %d", emp[i].id, emp[i].name, &emp[i].hourly_pay, &emp[i].hours);

       i++;

   } while (i<4);

   calc(emp);

   printf("�리�J�`��G\n");

   for (i=0; i<4; i++)

      printf("�s���G%s �m�W�G%s�@�리�J: %d\n",emp[i].id, emp[i].name, emp[i].payment);

   system("pause"); 

   return 0;

}



void calc(struct servitor p[])

{

    int i;

    for (i=0; i<4; i++)

       p[i].payment=p[i].hourly_pay*p[i].hours;

}
