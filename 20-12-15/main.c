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
////////		printf("请输入教师基本信息：");
////////		printf("\n");
////////		printf("请输入教师号:");
////////	    scanf("%s",tea[num].id);
////////	    int k;
////////	  for(k=0;k<num;k++){
////////	   	if(strcmp(tea[k].id,tea[num].id)==0)
////////	   	{printf("该教师信息已存在！");
////////		createmenu();}
////////		    }
////////	    printf("请输入教师姓名:");
////////	    scanf("%s",tea[num].name);
////////	   	printf("请选择教师学院：");
////////	    printf("1.工学院\t2.信息学院\t3.马学院\t4.理学院");
////////		int c;
////////		scanf("%d",&c);
////////		switch(c)
////////	{
////////		case 1:strcpy(tea[num].school,"工学院");break;
////////		case 2:strcpy(tea[num].school,"信息学院");break;
////////		case 3:strcpy(tea[num].school,"马学院");break;
////////		case 4:strcpy(tea[num].school,"理学院");break;
////////	}
////////	printf("学院：%s",tea[num].school);
////////		printf("\n请选择教师职称：");
////////		printf("1.教授\t2.副教授\t3.讲师\t4.助教") ;
////////	    scanf("%d",&c);
////////		switch(c)
////////			{
////////		case 1: strcpy(tea[num].level,"教授");
////////		case 2:strcpy(tea[num].level,"副教授");
////////		case 3:strcpy(tea[num].level,"讲师");
////////		case 4:strcpy(tea[num].level,"助教");
////////       }
////////		printf("职称：%s",tea[num].level);
////////		fwrite(&tea[num],sizeof(struct tea),1,fp);
////////		fclose(fp);
////////		num++;
////////		printf("是否继续添加?(Y/N)");
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
////////	    printf("请输入教师工号:");
////////	    scanf("%s",id);
////////	    for(int i=0;i<=num;i++){
////////	    	if(strcmp(tea[i].id,id)==0)  flag=i;
////////		}
////////		if(flag==-1){
////////			printf("该教师信息不存在，请重新输入");
////////			createmenu();
////////		}
/////////*	    show_tea(&tea[flag]); */
////////		if((fp2=(fopen("money.txt","ab")))==NULL)
////////        {	printf(" open error!") ;
////////        }
////////        printf("\n");
////////	    printf("请输入月份：");
////////		scanf("%d",&money[flag].month);
////////		printf("请输入基本工资：");
////////		scanf("%f",&money[flag].basic);
////////		printf("请输入津贴：");
////////		scanf("%f",&money[flag].jintie);
////////
////////		money[flag].should=money[flag].basic-money[flag].kouchu+money[flag].jintie;
////////		printf("实发工资是：%f",money[flag].should);
////////	/*	save_money(&money[flag][month-1]);*/
////////		fwrite(&money[flag],sizeof(struct money),1,fp2);
////////		/*num++;*/
////////		fclose(fp2);
////////		num2++;
////////		printf("是否继续添加?(Y/N)");
////////		if(getchar()=='y')
////////		createmoney();
////////		return;	}
//////// void createmenu()
////////{   char c;
////////	/*system(cls);*/
////////		printf("\n\t------录入菜单------------");
////////		printf("\n\t------[1]录入教师基本信息--------");
////////		printf("\n\t------[2]录入教师工资信息------");
////////		printf("\n\t------[3]返回主菜单------");
////////        printf("\n\t*****************************");
////////		printf("\n\t请选择:");
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
////////			printf("\n\t***************教师工资管理系统***************\n\n");
////////            printf("\n\t---------------[1]输入教师信息并保存---------------");
////////			printf("\n\t---------------[2]修改教师信息并保存---------------");
////////			printf("\n\t---------------[3]查询并显示---------------");
////////			printf("\n\t---------------[4]统计分析---------------");
////////			printf("\n\t---------------[5]退出-----------------");
////////			printf("\n\t**********************************************");
////////			printf("\n\t请选择:");
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
//////		printf("请输入教师基本信息：");
//////		printf("\n");
//////		printf("请输入教师号:");
//////	    scanf("%s",tea[num].id);
//////	    int k;
//////	  for(k=0;k<num;k++){
//////	   	if(strcmp(tea[k].id,tea[num].id)==0)
//////	   	{printf("该教师信息已存在！");
//////		createmenu();}
//////		    }
//////	    printf("请输入教师姓名:");
//////	    scanf("%s",tea[num].name);
//////	   	printf("请选择教师学院：");
//////	    printf("1.工学院\t2.信息学院\t3.马学院\t4.理学院");
//////		int c;
//////		scanf("%d",&c);
//////		switch(c)
//////	{
//////		case 1:strcpy(tea[num].school,"工学院");break;
//////		case 2:strcpy(tea[num].school,"信息学院");break;
//////		case 3:strcpy(tea[num].school,"马学院");break;
//////		case 4:strcpy(tea[num].school,"理学院");break;
//////	}
//////	printf("学院：%s",tea[num].school);
//////		printf("\n请选择教师职称：");
//////		printf("1.教授\t2.副教授\t3.讲师\t4.助教") ;
//////	    scanf("%d",&c);
//////		switch(c)
//////			{
//////		case 1: strcpy(tea[num].level,"教授");
//////		case 2:strcpy(tea[num].level,"副教授");
//////		case 3:strcpy(tea[num].level,"讲师");
//////		case 4:strcpy(tea[num].level,"助教");
//////       }
//////		printf("职称：%s",tea[num].level);
//////		fwrite(&tea[num],sizeof(struct tea),1,fp);
//////		fclose(fp);
//////		num++;
//////		printf("是否继续添加?(Y/N)");
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
//////	    printf("请输入教师工号:");
//////	    scanf("%s",id);
//////	    for(int i=0;i<=num;i++){
//////	    	if(strcmp(tea[i].id,id)==0)  flag=1;
//////		}
//////		if(flag==0){
//////			printf("该教师信息不存在，请重新输入");
//////			createmenu();
//////		}
///////*	    show_tea(&tea[flag]); */
//////		if((fp2=(fopen("money.txt","a")))==NULL)
//////        {	printf(" open error!") ;
//////        }
//////        printf("\n");
//////	    printf("请输入月份：");
//////		scanf("%d",&money[num2].month);
//////		printf("请输入基本工资：");
//////		scanf("%f",&money[num2].basic);
//////		printf("请输入津贴：");
//////		scanf("%f",&money[num2].jintie);
//////		 printf("请输入扣除工资");
//////		 scanf("%f",&money[num2].kouchu);
//////		money[num2].should=money[num2].basic-money[num2].kouchu+money[num2].jintie;
//////		printf("实发工资是：%f",money[num2].should);
//////
//////	fprintf(fp2,"%s%f",money[num2].id,money[num2].basic);
//////		/*num++;*/
//////		fclose(fp2);
//////		num2++;
//////		printf("是否继续添加?(Y/N)");
//////		if(getch()=='y')
//////		createmoney();
//////		return;	}
////// void createmenu()
//////{   char c;
///////*	system(cls);*/
//////		printf("\n\t------录入菜单------------");
//////		printf("\n\t------[1]录入教师基本信息--------");
//////		printf("\n\t------[2]录入教师工资信息------");
//////		printf("\n\t------[3]返回主菜单------");
//////        printf("\n\t*****************************");
//////		printf("\n\t请选择:\n");
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
//////			printf("\n\t***************教师工资管理系统***************\n\n");
//////            printf("\n\t---------------[1]输入教师信息并保存---------------");
//////			printf("\n\t---------------[2]修改教师信息并保存---------------");
//////			printf("\n\t---------------[3]查询并显示---------------");
//////			printf("\n\t---------------[4]统计分析---------------");
//////			printf("\n\t---------------[5]退出-----------------");
//////			printf("\n\t**********************************************");
//////			printf("\n\t请选择:");
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
////		printf("请输入教师基本信息：");
////		printf("\n");
////		printf("请输入教师号:");
////	    scanf("%s",tea[num].id);
////	    int k;
////	  for(k=0;k<num;k++){
////	   	if(strcmp(tea[k].id,tea[num].id)==0)
////	   	{printf("该教师信息已存在！");
////		createmenu();}
////		    }
////	    printf("请输入教师姓名:");
////	    scanf("%s",tea[num].name);
////	   	printf("请选择教师学院：");
////	    printf("1.工学院\t2.信息学院\t3.马学院\t4.理学院");
////		int c;
////		scanf("%d",&c);
////		switch(c)
////	{
////		case 1:strcpy(tea[num].school,"工学院");break;
////		case 2:strcpy(tea[num].school,"信息学院");break;
////		case 3:strcpy(tea[num].school,"马学院");break;
////		case 4:strcpy(tea[num].school,"理学院");break;
////	}
////	printf("学院：%s",tea[num].school);
////		printf("\n请选择教师职称：");
////		printf("1.教授\t2.副教授\t3.讲师\t4.助教") ;
////	    scanf("%d",&c);
////		switch(c)
////			{
////		case 1: strcpy(tea[num].level,"教授");
////		case 2:strcpy(tea[num].level,"副教授");
////		case 3:strcpy(tea[num].level,"讲师");
////		case 4:strcpy(tea[num].level,"助教");
////       }
////		printf("职称：%s",tea[num].level);
////		fwrite(&tea[num],sizeof(struct tea),1,fp);
////		fclose(fp);
////		num++;
////		printf("是否继续添加?(Y/N)");
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
////	    printf("请输入教师工号:");
////	    scanf("%s",id);
////	    for(int i=0;i<=num;i++){
////	    	if(strcmp(tea[i].id,id)==0)  flag=i;
////		}
////		if(flag==-1){
////			printf("该教师信息不存在，请重新输入");
////			createmenu();
////		}
/////*	    show_tea(&tea[flag]); */
////		if((fp2=(fopen("money.txt","ab")))==NULL)
////        {	printf(" open error!") ;
////        }
////        printf("\n");
////	    printf("请输入月份：");
////		scanf("%d",&money[flag].month);
////		printf("请输入基本工资：");
////		scanf("%f",&money[flag].basic);
////		printf("请输入津贴：");
////		scanf("%f",&money[flag].jintie);
////
////		money[flag].should=money[flag].basic-money[flag].kouchu+money[flag].jintie;
////		printf("实发工资是：%f",money[flag].should);
////	/*	save_money(&money[flag][month-1]);*/
////		fwrite(&money[flag],sizeof(struct money),1,fp2);
////		/*num++;*/
////		fclose(fp2);
////		num2++;
////		printf("是否继续添加?(Y/N)");
////		if(getchar()=='y')
////		createmoney();
////		return;	}
//// void createmenu()
////{   char c;
////	/*system(cls);*/
////		printf("\n\t------录入菜单------------");
////		printf("\n\t------[1]录入教师基本信息--------");
////		printf("\n\t------[2]录入教师工资信息------");
////		printf("\n\t------[3]返回主菜单------");
////        printf("\n\t*****************************");
////		printf("\n\t请选择:");
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
////			printf("\n\t***************教师工资管理系统***************\n\n");
////            printf("\n\t---------------[1]输入教师信息并保存---------------");
////			printf("\n\t---------------[2]修改教师信息并保存---------------");
////			printf("\n\t---------------[3]查询并显示---------------");
////			printf("\n\t---------------[4]统计分析---------------");
////			printf("\n\t---------------[5]退出-----------------");
////			printf("\n\t**********************************************");
////			printf("\n\t请选择:");
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
////蚩蚩 21:09:32
////第一部分：
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
//	printf("请输入教师姓名：");
//	scanf("%s",name);
//	printf("请输入要修改的月份：");
//	scanf("%d",&month);
//	for(i=0;i<num;i++){
//		if(strcmp(name,tea[i].name)==0){
//		    flag=1;
//			printf("以下是该教师所有信息");
//			printf("\n\t姓名：%s",tea[i].name);
//			printf("\n\t工号:%s",tea[i].id);
//			printf("\n\t学院:%s",tea[i].school);
//			printf("\n\t职称:%s",tea[i].level);
//			for(j=0;j<num2;j++){
//			if(money[j].month==month&&strcmp(money[j].id,tea[i].id)==0){
//			printf("\n\t月份:%d",money[j].month);
//			printf("\n\t基本工资:%f",money[j].basic);
//			printf("\n\t津贴:%f",money[j].jintie);
//			printf("\n\t扣除:%f",money[j].kouchu);
//			printf("\n\t应发工资:%f",money[j].should);
//			printf("\n\t实发工资:%f",money[j].fact);
//			}
//			}
//		printf("**********更新教师信息************");
//		printf("请输入教师姓名：");
//		scanf("%s",tea[i].name);
//		printf("请输入教师工号:");
//		scanf("%s",tea[i].id);
//		printf("请选择教师学院：");
//	    printf("1.工学院\t2.信息学院\t3.马学院\t4.理学院");
//		int c;
//		scanf("%d",&c);
//		switch(c)
//	{
//		case 1:strcpy(tea[i].school,"工学院");break;
//		case 2:strcpy(tea[i].school,"信息学院");break;
//		case 3:strcpy(tea[i].school,"马克思学院");break;
//		case 4:strcpy(tea[i].school,"理学院");break;
//	}
//		printf("学院：%s",tea[i].school);
//		printf("\n请选择教师职称：");
//		printf("1.教授\t2.副教授\t3.讲师\t4.助教") ;
//	    scanf("%d",&c);
//		switch(c)
//	{	case 1: strcpy(tea[i].level,"教授");
//		case 2:strcpy(tea[i].level,"副教授");
//		case 3:strcpy(tea[i].level,"讲师");
//		case 4:strcpy(tea[i].level,"助教");
//}
//		printf("职称：%s",tea[i].level);
//
//
//
//
//		fprintf(fp,"姓名：%s\t 工号%s\t学院%s\t职称%s",tea[i].name,tea[i].id,tea[i].school,tea[i].level);
//	/*	fprintf(fp2,"月份：%d\t工号：%f\t基本工资：%f\t扣除工资：%f\t津贴业绩：%f\t应发工资：%f\t实发工资：%f",money[j].month,money[j].basic,money[j].kouchu,money[j].jintie,money[j].should,money[j].fact);*/
//
//		}
//	}
//	if(flag==0){
//		printf("该教师信息不存在");
//		changemenu();
//	}
//	fclose(fp);
//	fclose(fp2);
//}
//
//void changemenu(){
//	printf("\n************修改菜单************\n");
//	printf("**********[1]根据工号修改**********\n") ;
//	printf("**********[2]根据姓名修改**********\n") ;
//	printf("**********[3]删除某一工号教师信息**********\n") ;
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
////蚩蚩 21:10:11
//void createtea(){
//
//	if((fp=(fopen("teacher.txt","a")))==NULL)
//        {
//	printf(" open error!") ;
//}
//		printf("\n");
//		printf("请输入教师基本信息：");
//		printf("\n");
//		printf("请输入教师号:");
//	    scanf("%s",tea[num].id);
//	    int k;
//	  for(k=0;k<num;k++){
//	   	if(strcmp(tea[k].id,tea[num].id)==0)
//	   	{printf("该教师信息已存在！");
//		createmenu();}
//		    }
//	    printf("请输入教师姓名:");
//	    scanf("%s",tea[num].name);
//	   	printf("请选择教师学院：");
//	    printf("1.工学院\t2.信息学院\t3.马学院\t4.理学院");
//		int c;
//		scanf("%d",&c);
//		switch(c)
//	{
//		case 1:strcpy(tea[num].school,"工学院");break;
//		case 2:strcpy(tea[num].school,"信息学院");break;
//		case 3:strcpy(tea[num].school,"马克思学院");break;
//		case 4:strcpy(tea[num].school,"理学院");break;
//	}
//	printf("学院：%s",tea[num].school);
//		printf("\n请选择教师职称：");
//		printf("1.教授\t2.副教授\t3.讲师\t4.助教") ;
//	    scanf("%d",&c);
//		switch(c)
//			{
//		case 1: strcpy(tea[num].level,"教授");
//		case 2:strcpy(tea[num].level,"副教授");
//		case 3:strcpy(tea[num].level,"讲师");
//		case 4:strcpy(tea[num].level,"助教");
//       }
//		printf("职称：%s",tea[num].level);
//		fprintf(fp,"工号：%s\t姓名：%s\t",tea[num].id,tea[num].name);
//		fclose(fp);
//		num++;
//		printf("是否继续添加?(Y/N)");
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
//	    printf("请输入教师工号:");
//	    scanf("%s",id);
//	    for(int i=0;i<=num;i++){
//	    	if(strcmp(tea[i].id,id)==0)  flag=1;
//		}
//		if(flag==0){
//			printf("该教师信息不存在，请重新输入");
//			createmenu();
//		}
///*	    show_tea(&tea[flag]); */
//		if((fp2=(fopen("money.txt","a")))==NULL)
//        {	printf(" open error!") ;
//        }
//        printf("\n");
//	    printf("请输入月份：");
//		scanf("%d",&money[num2].month);
//		printf("请输入基本工资：");
//		scanf("%f",&money[num2].basic);
//		printf("请输入津贴：");
//		scanf("%f",&money[num2].jintie);
//		 printf("请输入扣除工资");
//		 scanf("%f",&money[num2].kouchu);
//		money[num2].should=money[num2].basic-money[num2].kouchu+money[num2].jintie;
//		printf("实发工资是：%f",money[num2].should);
//
//	fprintf(fp2,"工号:%s   基本工资：%f  ",money[num2].id,money[num2].basic);
//		/*num++;*/
//		fclose(fp2);
//		num2++;
//		printf("是否继续添加?(Y/N)");
//		if(getch()=='y')
//		createmoney();
//		return;	}
// void createmenu()
//{   char c;
//
///*	system(cls);*/
//		printf("\n\t------录入菜单------------");
//		printf("\n\t------[1]录入教师基本信息--------");
//		printf("\n\t------[2]录入教师工资信息------");
//		printf("\n\t------[3]返回主菜单------");
//        printf("\n\t*****************************");
//		printf("\n\t请选择:\n");
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
//			printf("\n\t***************教师工资管理系统***************\n\n");
//            printf("\n\t---------------[1]输入教师信息并保存---------------");
//			printf("\n\t---------------[2]修改教师信息并保存---------------");
//			printf("\n\t---------------[3]查询并显示---------------");
//			printf("\n\t---------------[4]统计分析---------------");
//			printf("\n\t---------------[5]退出-----------------");
//			printf("\n\t**********************************************");
//			printf("\n\t请选择:");
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
	i++;//输入一个一'\n'结束的字符串//
	arr[i-1]='\0';


	 for(k=0;k<i-1;k++)
	   for(j=0;j<i-k-1;j++)
       {
         if(arr[j]>arr[j+1])
  		{                    //根据ASCLL码值进行冒泡排序//
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
