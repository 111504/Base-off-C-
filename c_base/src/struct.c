/*
 * struct.c
 *
 *  Created on: 2020年2月1日
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
	struct student jone={"John Smith",123,"0905015016",60,12,6};//宣告
	struct student *ptr=&jone;

	printf("name is %s\n",jone.name);
	strcpy(jone.name,"John Amy");//指定欄位改值
	printf("name is %s\n",jone.name);
	printf("%ld \n",offsetof(struct student,number));
	ptr->number=11345;//指標方式改值
	printf("number is %ld\n",jone.number);
	//////////////////////////////////////////
	/*把結構當參數傳遞*/

}



