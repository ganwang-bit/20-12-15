////////#include <stdio.h>
////////#include <stdlib.h>
////////
////////int main()
////////{
////////    printf("Hello world!\n");
////////    return 0;
////////}
////////#include<stdio.h>
////////int main()
////////{
////////    int a[10]={};
////////    return 0;
////////}
////////#include<stdio.h>
////////#include<string.h>
////////#include<stdlib.h>
////////#include<conio.h>
////////struct tea{
////////	char id[20];
////////	char name[20];
////////	char school[20];
////////	char level[20];}tea[50];
////////struct money{
////////	char id[20];
////////	int  month;
////////	float basic;
////////	float jintie;
////////	float kouchu;
////////	float should;
////////	float fact;
////////}money[50];
/////////*int num=0;*/
////////FILE*fp;
////////FILE*fp2;
//////// int num=0;
//////// int num2=0;
////////	void createmenu();
////////void createtea(){
////////	if((fp=(fopen("teacher.txt","ab")))==NULL)
////////        {
////////	printf(" open error!") ;
////////}
////////		static int num=0;
////////		printf("\n");
////////		printf("�������ʦ������Ϣ��");
////////		printf("\n");
////////		printf("�������ʦ��:");
////////	    scanf("%s",tea[num].id);
////////	    int k;
////////	  for(k=0;k<num;k++){
////////	   	if(strcmp(tea[k].id,tea[num].id)==0)
////////	   	{printf("�ý�ʦ��Ϣ�Ѵ��ڣ�");
////////		createmenu();}
////////		    }
////////	    printf("�������ʦ����:");
////////	    scanf("%s",tea[num].name);
////////	   	printf("��ѡ���ʦѧԺ��");
////////	    printf("1.��ѧԺ\t2.��ϢѧԺ\t3.��ѧԺ\t4.��ѧԺ");
////////		int c;
////////		scanf("%d",&c);
////////		switch(c)
////////	{
////////		case 1:strcpy(tea[num].school,"��ѧԺ");break;
////////		case 2:strcpy(tea[num].school,"��ϢѧԺ");break;
////////		case 3:strcpy(tea[num].school,"��ѧԺ");break;
////////		case 4:strcpy(tea[num].school,"��ѧԺ");break;
////////	}
////////	printf("ѧԺ��%s",tea[num].school);
////////		printf("\n��ѡ���ʦְ�ƣ�");
////////		printf("1.����\t2.������\t3.��ʦ\t4.����") ;
////////	    scanf("%d",&c);
////////		switch(c)
////////			{
////////		case 1: strcpy(tea[num].level,"����");
////////		case 2:strcpy(tea[num].level,"������");
////////		case 3:strcpy(tea[num].level,"��ʦ");
////////		case 4:strcpy(tea[num].level,"����");
////////       }
////////		printf("ְ�ƣ�%s",tea[num].level);
////////		fwrite(&tea[num],sizeof(struct tea),1,fp);
////////		fclose(fp);
////////		num++;
////////		printf("�Ƿ�������?(Y/N)");
////////		if(getch()=='y')
////////		createtea();
////////		return;
////////}
////////
////////void createmoney()
////////{     /*  int num=0;*/
////////	char id[20];
////////        int flag=-1;
////////        printf("\n");
////////	    printf("�������ʦ����:");
////////	    scanf("%s",id);
////////	    for(int i=0;i<=num;i++){
////////	    	if(strcmp(tea[i].id,id)==0)  flag=i;
////////		}
////////		if(flag==-1){
////////			printf("�ý�ʦ��Ϣ�����ڣ�����������");
////////			createmenu();
////////		}
/////////*	    show_tea(&tea[flag]); */
////////		if((fp2=(fopen("money.txt","ab")))==NULL)
////////        {	printf(" open error!") ;
////////        }
////////        printf("\n");
////////	    printf("�������·ݣ�");
////////		scanf("%d",&money[flag].month);
////////		printf("������������ʣ�");
////////		scanf("%f",&money[flag].basic);
////////		printf("�����������");
////////		scanf("%f",&money[flag].jintie);
////////
////////		money[flag].should=money[flag].basic-money[flag].kouchu+money[flag].jintie;
////////		printf("ʵ�������ǣ�%f",money[flag].should);
////////	/*	save_money(&money[flag][month-1]);*/
////////		fwrite(&money[flag],sizeof(struct money),1,fp2);
////////		/*num++;*/
////////		fclose(fp2);
////////		num2++;
////////		printf("�Ƿ�������?(Y/N)");
////////		if(getchar()=='y')
////////		createmoney();
////////		return;	}
//////// void createmenu()
////////{   char c;
////////	/*system(cls);*/
////////		printf("\n\t------¼��˵�------------");
////////		printf("\n\t------[1]¼���ʦ������Ϣ--------");
////////		printf("\n\t------[2]¼���ʦ������Ϣ------");
////////		printf("\n\t------[3]�������˵�------");
////////        printf("\n\t*****************************");
////////		printf("\n\t��ѡ��:");
////////		c=getchar();
////////		switch(c)
////////		{
////////			case'1':createtea();break;
////////			case'2':createmoney();break;
////////		/*	case'3':mainmenu();break;*/
////////		}
//////// }
////////void mainmenu(){
/////////*	system("cls");*/
////////	printf("\n\t--------------------WELCOME--------------------\n");
////////			printf("\n\t***************��ʦ���ʹ���ϵͳ***************\n\n");
////////            printf("\n\t---------------[1]�����ʦ��Ϣ������---------------");
////////			printf("\n\t---------------[2]�޸Ľ�ʦ��Ϣ������---------------");
////////			printf("\n\t---------------[3]��ѯ����ʾ---------------");
////////			printf("\n\t---------------[4]ͳ�Ʒ���---------------");
////////			printf("\n\t---------------[5]�˳�-----------------");
////////			printf("\n\t**********************************************");
////////			printf("\n\t��ѡ��:");
////////	 int c;
////////	 scanf("%d",&c);
////////	 switch(c)		{
////////	 	case 1:createmenu();break;
////////	 /*	case 2:changemenu();break;
////////	 	case 3:searchmenu();break;
////////	 	case 4:analyse();break;
////////	 	case 5:exit(0) ;break; }*/
////////}
////////}
////////int main(){
////////	while(1){
////////		mainmenu();
////////	}
////////}
//////#include<stdio.h>
//////#include<string.h>
//////#include<stdlib.h>
//////#include<conio.h>
//////struct tea{
//////	char id[20];
//////	char name[20];
//////	char school[20];
//////	char level[20];}tea[50];
//////struct money{
//////	char id[20];
//////	int  month;
//////	float basic;
//////	float jintie;
//////	float kouchu;
//////	float should;
//////	float fact;
//////}money[50];
//////void createmenu();
///////*int num=0;*/
//////FILE*fp;
//////FILE*fp2;
////// int num=0;
////// int num2=0;
//////
//////void createtea(){
//////
//////	if((fp=(fopen("teacher.txt","a")))==NULL)
//////        {
//////	printf(" open error!") ;
//////}
//////		static int num=0;
//////		printf("\n");
//////		printf("�������ʦ������Ϣ��");
//////		printf("\n");
//////		printf("�������ʦ��:");
//////	    scanf("%s",tea[num].id);
//////	    int k;
//////	  for(k=0;k<num;k++){
//////	   	if(strcmp(tea[k].id,tea[num].id)==0)
//////	   	{printf("�ý�ʦ��Ϣ�Ѵ��ڣ�");
//////		createmenu();}
//////		    }
//////	    printf("�������ʦ����:");
//////	    scanf("%s",tea[num].name);
//////	   	printf("��ѡ���ʦѧԺ��");
//////	    printf("1.��ѧԺ\t2.��ϢѧԺ\t3.��ѧԺ\t4.��ѧԺ");
//////		int c;
//////		scanf("%d",&c);
//////		switch(c)
//////	{
//////		case 1:strcpy(tea[num].school,"��ѧԺ");break;
//////		case 2:strcpy(tea[num].school,"��ϢѧԺ");break;
//////		case 3:strcpy(tea[num].school,"��ѧԺ");break;
//////		case 4:strcpy(tea[num].school,"��ѧԺ");break;
//////	}
//////	printf("ѧԺ��%s",tea[num].school);
//////		printf("\n��ѡ���ʦְ�ƣ�");
//////		printf("1.����\t2.������\t3.��ʦ\t4.����") ;
//////	    scanf("%d",&c);
//////		switch(c)
//////			{
//////		case 1: strcpy(tea[num].level,"����");
//////		case 2:strcpy(tea[num].level,"������");
//////		case 3:strcpy(tea[num].level,"��ʦ");
//////		case 4:strcpy(tea[num].level,"����");
//////       }
//////		printf("ְ�ƣ�%s",tea[num].level);
//////		fwrite(&tea[num],sizeof(struct tea),1,fp);
//////		fclose(fp);
//////		num++;
//////		printf("�Ƿ�������?(Y/N)");
//////		if(getch()=='y')
//////		createtea();
//////		return;
//////}
//////
//////void createmoney()
//////{     /*  int num=0;*/
//////	char id[20];
//////	 void createmenu();
//////        int flag=0;
//////        printf("\n");
//////	    printf("�������ʦ����:");
//////	    scanf("%s",id);
//////	    for(int i=0;i<=num;i++){
//////	    	if(strcmp(tea[i].id,id)==0)  flag=1;
//////		}
//////		if(flag==0){
//////			printf("�ý�ʦ��Ϣ�����ڣ�����������");
//////			createmenu();
//////		}
///////*	    show_tea(&tea[flag]); */
//////		if((fp2=(fopen("money.txt","a")))==NULL)
//////        {	printf(" open error!") ;
//////        }
//////        printf("\n");
//////	    printf("�������·ݣ�");
//////		scanf("%d",&money[num2].month);
//////		printf("������������ʣ�");
//////		scanf("%f",&money[num2].basic);
//////		printf("�����������");
//////		scanf("%f",&money[num2].jintie);
//////		 printf("������۳�����");
//////		 scanf("%f",&money[num2].kouchu);
//////		money[num2].should=money[num2].basic-money[num2].kouchu+money[num2].jintie;
//////		printf("ʵ�������ǣ�%f",money[num2].should);
//////
//////	fprintf(fp2,"%s%f",money[num2].id,money[num2].basic);
//////		/*num++;*/
//////		fclose(fp2);
//////		num2++;
//////		printf("�Ƿ�������?(Y/N)");
//////		if(getch()=='y')
//////		createmoney();
//////		return;	}
////// void createmenu()
//////{   char c;
///////*	system(cls);*/
//////		printf("\n\t------¼��˵�------------");
//////		printf("\n\t------[1]¼���ʦ������Ϣ--------");
//////		printf("\n\t------[2]¼���ʦ������Ϣ------");
//////		printf("\n\t------[3]�������˵�------");
//////        printf("\n\t*****************************");
//////		printf("\n\t��ѡ��:\n");
//////		c=getch();
//////		switch(c)
//////		{
//////			case'1':createtea();break;
//////			case'2':createmoney();break;
//////		/*	case'3':mainmenu();break;*/
//////		}
////// }
//////void mainmenu(){
///////*	system("cls");*/
//////	printf("\n\t--------------------WELCOME--------------------\n");
//////			printf("\n\t***************��ʦ���ʹ���ϵͳ***************\n\n");
//////            printf("\n\t---------------[1]�����ʦ��Ϣ������---------------");
//////			printf("\n\t---------------[2]�޸Ľ�ʦ��Ϣ������---------------");
//////			printf("\n\t---------------[3]��ѯ����ʾ---------------");
//////			printf("\n\t---------------[4]ͳ�Ʒ���---------------");
//////			printf("\n\t---------------[5]�˳�-----------------");
//////			printf("\n\t**********************************************");
//////			printf("\n\t��ѡ��:");
//////	 int c;
//////	 scanf("%d",&c);
//////	 switch(c)		{
//////	 	case 1:createmenu();break;
//////	 /*	case 2:changemenu();break;
//////	 	case 3:searchmenu();break;
//////	 	case 4:analyse();break;
//////	 	case 5:exit(0) ;break; }*/
//////}
//////}
//////int main(){
//////	while(1){
//////		mainmenu();
//////	}
//////}
////#include<stdio.h>
////#include<string.h>
////#include<stdlib.h>
////#include<conio.h>
////struct tea{
////	char id[20];
////	char name[20];
////	char school[20];
////	char level[20];}tea[50];
////struct money{
////	char id[20];
////	int  month;
////	float basic;
////	float jintie;
////	float kouchu;
////	float should;
////	float fact;
////}money[50];
/////*int num=0;*/
////FILE*fp;
////FILE*fp2;
//// int num=0;
//// int num2=0;
////	void createmenu();
////void createtea(){
////	if((fp=(fopen("teacher.txt","ab")))==NULL)
////        {
////	printf(" open error!") ;
////}
////		static int num=0;
////		printf("\n");
////		printf("�������ʦ������Ϣ��");
////		printf("\n");
////		printf("�������ʦ��:");
////	    scanf("%s",tea[num].id);
////	    int k;
////	  for(k=0;k<num;k++){
////	   	if(strcmp(tea[k].id,tea[num].id)==0)
////	   	{printf("�ý�ʦ��Ϣ�Ѵ��ڣ�");
////		createmenu();}
////		    }
////	    printf("�������ʦ����:");
////	    scanf("%s",tea[num].name);
////	   	printf("��ѡ���ʦѧԺ��");
////	    printf("1.��ѧԺ\t2.��ϢѧԺ\t3.��ѧԺ\t4.��ѧԺ");
////		int c;
////		scanf("%d",&c);
////		switch(c)
////	{
////		case 1:strcpy(tea[num].school,"��ѧԺ");break;
////		case 2:strcpy(tea[num].school,"��ϢѧԺ");break;
////		case 3:strcpy(tea[num].school,"��ѧԺ");break;
////		case 4:strcpy(tea[num].school,"��ѧԺ");break;
////	}
////	printf("ѧԺ��%s",tea[num].school);
////		printf("\n��ѡ���ʦְ�ƣ�");
////		printf("1.����\t2.������\t3.��ʦ\t4.����") ;
////	    scanf("%d",&c);
////		switch(c)
////			{
////		case 1: strcpy(tea[num].level,"����");
////		case 2:strcpy(tea[num].level,"������");
////		case 3:strcpy(tea[num].level,"��ʦ");
////		case 4:strcpy(tea[num].level,"����");
////       }
////		printf("ְ�ƣ�%s",tea[num].level);
////		fwrite(&tea[num],sizeof(struct tea),1,fp);
////		fclose(fp);
////		num++;
////		printf("�Ƿ�������?(Y/N)");
////		if(getch()=='y')
////		createtea();
////		return;
////}
////
////void createmoney()
////{     /*  int num=0;*/
////	char id[20];
////        int flag=-1;
////        printf("\n");
////	    printf("�������ʦ����:");
////	    scanf("%s",id);
////	    for(int i=0;i<=num;i++){
////	    	if(strcmp(tea[i].id,id)==0)  flag=i;
////		}
////		if(flag==-1){
////			printf("�ý�ʦ��Ϣ�����ڣ�����������");
////			createmenu();
////		}
/////*	    show_tea(&tea[flag]); */
////		if((fp2=(fopen("money.txt","ab")))==NULL)
////        {	printf(" open error!") ;
////        }
////        printf("\n");
////	    printf("�������·ݣ�");
////		scanf("%d",&money[flag].month);
////		printf("������������ʣ�");
////		scanf("%f",&money[flag].basic);
////		printf("�����������");
////		scanf("%f",&money[flag].jintie);
////
////		money[flag].should=money[flag].basic-money[flag].kouchu+money[flag].jintie;
////		printf("ʵ�������ǣ�%f",money[flag].should);
////	/*	save_money(&money[flag][month-1]);*/
////		fwrite(&money[flag],sizeof(struct money),1,fp2);
////		/*num++;*/
////		fclose(fp2);
////		num2++;
////		printf("�Ƿ�������?(Y/N)");
////		if(getchar()=='y')
////		createmoney();
////		return;	}
//// void createmenu()
////{   char c;
////	/*system(cls);*/
////		printf("\n\t------¼��˵�------------");
////		printf("\n\t------[1]¼���ʦ������Ϣ--------");
////		printf("\n\t------[2]¼���ʦ������Ϣ------");
////		printf("\n\t------[3]�������˵�------");
////        printf("\n\t*****************************");
////		printf("\n\t��ѡ��:");
////		getchar();
////		c=getchar();
////		switch(c)
////		{
////			case'1':createtea();break;
////			case'2':createmoney();break;
////		/*	case'3':mainmenu();break;*/
////		}
//// }
////void mainmenu(){
/////*	system("cls");*/
////	printf("\n\t--------------------WELCOME--------------------\n");
////			printf("\n\t***************��ʦ���ʹ���ϵͳ***************\n\n");
////            printf("\n\t---------------[1]�����ʦ��Ϣ������---------------");
////			printf("\n\t---------------[2]�޸Ľ�ʦ��Ϣ������---------------");
////			printf("\n\t---------------[3]��ѯ����ʾ---------------");
////			printf("\n\t---------------[4]ͳ�Ʒ���---------------");
////			printf("\n\t---------------[5]�˳�-----------------");
////			printf("\n\t**********************************************");
////			printf("\n\t��ѡ��:");
////	 int c;
////	 scanf("%d",&c);
////	 switch(c)		{
////	 	case 1:createmenu();break;
////	 /*	case 2:changemenu();break;
////	 	case 3:searchmenu();break;
////	 	case 4:analyse();break;
////	 	case 5:exit(0) ;break; }*/
////}
////}
////int main(){
////	while(1){
////		mainmenu();
////	}
////}
////�� 21:09:32
////��һ���֣�
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<conio.h>
//struct tea{
//	char id[20];
//	char name[20];
//	char school[20];
//	char level[20];}tea[50];
//struct money{
//	char id[20];
//	int  month;
//	float basic;
//	float jintie;
//	float kouchu;
//	float should;
//	float fact;
//}money[50];
//void createmenu();
//void changemenu();
///*int num=0;*/
//FILE*fp;
//FILE*fp2;
// int num=0;
// int num2=0;
//void changename(){
// if((fp=fopen("teacher.txt","r"))==NULL){
// 	printf(" open file error!");
// }
// if((fp2=fopen("money.txt","r"))==NULL){
// 	printf(" open file error!");
// }
//	int i,j,flag;
//	flag=0;
//	int month;
//	char name[20];
//	printf("�������ʦ������");
//	scanf("%s",name);
//	printf("������Ҫ�޸ĵ��·ݣ�");
//	scanf("%d",&month);
//	for(i=0;i<num;i++){
//		if(strcmp(name,tea[i].name)==0){
//		    flag=1;
//			printf("�����Ǹý�ʦ������Ϣ");
//			printf("\n\t������%s",tea[i].name);
//			printf("\n\t����:%s",tea[i].id);
//			printf("\n\tѧԺ:%s",tea[i].school);
//			printf("\n\tְ��:%s",tea[i].level);
//			for(j=0;j<num2;j++){
//			if(money[j].month==month&&strcmp(money[j].id,tea[i].id)==0){
//			printf("\n\t�·�:%d",money[j].month);
//			printf("\n\t��������:%f",money[j].basic);
//			printf("\n\t����:%f",money[j].jintie);
//			printf("\n\t�۳�:%f",money[j].kouchu);
//			printf("\n\tӦ������:%f",money[j].should);
//			printf("\n\tʵ������:%f",money[j].fact);
//			}
//			}
//		printf("**********���½�ʦ��Ϣ************");
//		printf("�������ʦ������");
//		scanf("%s",tea[i].name);
//		printf("�������ʦ����:");
//		scanf("%s",tea[i].id);
//		printf("��ѡ���ʦѧԺ��");
//	    printf("1.��ѧԺ\t2.��ϢѧԺ\t3.��ѧԺ\t4.��ѧԺ");
//		int c;
//		scanf("%d",&c);
//		switch(c)
//	{
//		case 1:strcpy(tea[i].school,"��ѧԺ");break;
//		case 2:strcpy(tea[i].school,"��ϢѧԺ");break;
//		case 3:strcpy(tea[i].school,"���˼ѧԺ");break;
//		case 4:strcpy(tea[i].school,"��ѧԺ");break;
//	}
//		printf("ѧԺ��%s",tea[i].school);
//		printf("\n��ѡ���ʦְ�ƣ�");
//		printf("1.����\t2.������\t3.��ʦ\t4.����") ;
//	    scanf("%d",&c);
//		switch(c)
//	{	case 1: strcpy(tea[i].level,"����");
//		case 2:strcpy(tea[i].level,"������");
//		case 3:strcpy(tea[i].level,"��ʦ");
//		case 4:strcpy(tea[i].level,"����");
//}
//		printf("ְ�ƣ�%s",tea[i].level);
//
//
//
//
//		fprintf(fp,"������%s\t ����%s\tѧԺ%s\tְ��%s",tea[i].name,tea[i].id,tea[i].school,tea[i].level);
//	/*	fprintf(fp2,"�·ݣ�%d\t���ţ�%f\t�������ʣ�%f\t�۳����ʣ�%f\t����ҵ����%f\tӦ�����ʣ�%f\tʵ�����ʣ�%f",money[j].month,money[j].basic,money[j].kouchu,money[j].jintie,money[j].should,money[j].fact);*/
//
//		}
//	}
//	if(flag==0){
//		printf("�ý�ʦ��Ϣ������");
//		changemenu();
//	}
//	fclose(fp);
//	fclose(fp2);
//}
//
//void changemenu(){
//	printf("\n************�޸Ĳ˵�************\n");
//	printf("**********[1]���ݹ����޸�**********\n") ;
//	printf("**********[2]���������޸�**********\n") ;
//	printf("**********[3]ɾ��ĳһ���Ž�ʦ��Ϣ**********\n") ;
//	int c;
//	scanf("%d",&c);
//	switch (c)
//	{
///*	case 1:changeid();break;*/
//	case 2:changename();break;
//
//
//}}
//
////�� 21:10:11
//void createtea(){
//
//	if((fp=(fopen("teacher.txt","a")))==NULL)
//        {
//	printf(" open error!") ;
//}
//		printf("\n");
//		printf("�������ʦ������Ϣ��");
//		printf("\n");
//		printf("�������ʦ��:");
//	    scanf("%s",tea[num].id);
//	    int k;
//	  for(k=0;k<num;k++){
//	   	if(strcmp(tea[k].id,tea[num].id)==0)
//	   	{printf("�ý�ʦ��Ϣ�Ѵ��ڣ�");
//		createmenu();}
//		    }
//	    printf("�������ʦ����:");
//	    scanf("%s",tea[num].name);
//	   	printf("��ѡ���ʦѧԺ��");
//	    printf("1.��ѧԺ\t2.��ϢѧԺ\t3.��ѧԺ\t4.��ѧԺ");
//		int c;
//		scanf("%d",&c);
//		switch(c)
//	{
//		case 1:strcpy(tea[num].school,"��ѧԺ");break;
//		case 2:strcpy(tea[num].school,"��ϢѧԺ");break;
//		case 3:strcpy(tea[num].school,"���˼ѧԺ");break;
//		case 4:strcpy(tea[num].school,"��ѧԺ");break;
//	}
//	printf("ѧԺ��%s",tea[num].school);
//		printf("\n��ѡ���ʦְ�ƣ�");
//		printf("1.����\t2.������\t3.��ʦ\t4.����") ;
//	    scanf("%d",&c);
//		switch(c)
//			{
//		case 1: strcpy(tea[num].level,"����");
//		case 2:strcpy(tea[num].level,"������");
//		case 3:strcpy(tea[num].level,"��ʦ");
//		case 4:strcpy(tea[num].level,"����");
//       }
//		printf("ְ�ƣ�%s",tea[num].level);
//		fprintf(fp,"���ţ�%s\t������%s\t",tea[num].id,tea[num].name);
//		fclose(fp);
//		num++;
//		printf("�Ƿ�������?(Y/N)");
//		if(getch()=='y')
//		createtea();
//		return;
//}
//
//void createmoney()
//{     /*  int num=0;*/
//	char id[20];
//
//        int flag=0;
//        printf("\n");
//	    printf("�������ʦ����:");
//	    scanf("%s",id);
//	    for(int i=0;i<=num;i++){
//	    	if(strcmp(tea[i].id,id)==0)  flag=1;
//		}
//		if(flag==0){
//			printf("�ý�ʦ��Ϣ�����ڣ�����������");
//			createmenu();
//		}
///*	    show_tea(&tea[flag]); */
//		if((fp2=(fopen("money.txt","a")))==NULL)
//        {	printf(" open error!") ;
//        }
//        printf("\n");
//	    printf("�������·ݣ�");
//		scanf("%d",&money[num2].month);
//		printf("������������ʣ�");
//		scanf("%f",&money[num2].basic);
//		printf("�����������");
//		scanf("%f",&money[num2].jintie);
//		 printf("������۳�����");
//		 scanf("%f",&money[num2].kouchu);
//		money[num2].should=money[num2].basic-money[num2].kouchu+money[num2].jintie;
//		printf("ʵ�������ǣ�%f",money[num2].should);
//
//	fprintf(fp2,"����:%s   �������ʣ�%f  ",money[num2].id,money[num2].basic);
//		/*num++;*/
//		fclose(fp2);
//		num2++;
//		printf("�Ƿ�������?(Y/N)");
//		if(getch()=='y')
//		createmoney();
//		return;	}
// void createmenu()
//{   char c;
//
///*	system(cls);*/
//		printf("\n\t------¼��˵�------------");
//		printf("\n\t------[1]¼���ʦ������Ϣ--------");
//		printf("\n\t------[2]¼���ʦ������Ϣ------");
//		printf("\n\t------[3]�������˵�------");
//        printf("\n\t*****************************");
//		printf("\n\t��ѡ��:\n");
//		c=getch();
//		switch(c)
//		{
//			case'1':createtea();break;
//			case'2':createmoney();break;
//		/*	case'3':mainmenu();break;*/
//		}
// }
//void mainmenu(){
///*	system("cls");*/
//	printf("\n\t--------------------WELCOME--------------------\n");
//			printf("\n\t***************��ʦ���ʹ���ϵͳ***************\n\n");
//            printf("\n\t---------------[1]�����ʦ��Ϣ������---------------");
//			printf("\n\t---------------[2]�޸Ľ�ʦ��Ϣ������---------------");
//			printf("\n\t---------------[3]��ѯ����ʾ---------------");
//			printf("\n\t---------------[4]ͳ�Ʒ���---------------");
//			printf("\n\t---------------[5]�˳�-----------------");
//			printf("\n\t**********************************************");
//			printf("\n\t��ѡ��:");
//	 int c;
//	 scanf("%d",&c);
//	 switch(c)		{
//	 	case 1:createmenu();break;
//	    case 2:changemenu();break;
//	 	/*case 3:searchmenu();break;
//	 	case 4:analyse();break;
//	 	case 5:exit(0) ;break; }*/
//}
//}
//int main(){
//	while(1){
//		mainmenu();
//	}
//}
//
#include<stdio.h>
int main()
{
  char arr[80],i=0,n,j,k,temp;
   while((arr[i]=getchar())!='\n')
	i++;//����һ��һ'\n'�������ַ���//
	arr[i-1]='\0';


	 for(k=0;k<i-1;k++)
	   for(j=0;j<i-k-1;j++)
       {
         if(arr[j]>arr[j+1])
  		{                    //����ASCLL��ֵ����ð������//
         temp=arr[j];
  		 arr[j]=arr[j+1];
  		 arr[j+1]=temp;
  		}

  	   }

  	for(k=0;k<i;k++)
	printf("%c",arr[k]);
	printf("\n");
	return 0;
}
