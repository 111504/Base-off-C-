/*
 * struct.c
 *
 *  Created on: 2020�~2��1��
 *      Author: fish2
 */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
struct student{
		char name[10];
		int number;
        char phone[10];
        float grade[10];
		int birthday,birthMonth;
};
int main(void) {
	struct student jone={"John Smith",123,"0905015016",60,12,6};//�ŧi
	struct student *ptr=&jone;

	printf("name is %s\n",jone.name);
	strcpy(jone.name,"John Amy");//���w�����
	printf("name is %s\n",jone.name);
	printf("%ld \n",offsetof(struct student,number));
	ptr->number=11345;//���Ф覡���
	printf("number is %ld\n",jone.number);
	//////////////////////////////////////////
	/*�⵲�c��Ѽƶǻ�*/

}



