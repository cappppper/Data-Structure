  /*�Ķ�������������ĳ�����д�հ״������г��� */
 #include<string.h>
 #include<ctype.h>
 #include<malloc.h> 
 #include<limits.h> 
 #include<stdio.h> 
 #include<stdlib.h> 
 #include<io.h> 
 #include<math.h> 
 #include<process.h> 

 #define TRUE 1
 #define FALSE 0
 #define OK 1
 #define ERROR 0
 #define INFEASIBLE -1

 typedef int Status; 
 typedef int Boolean; 

/*������������(�ڽ̿���1.4.3 �㷨Ч�ʵĶ�����)�ĳ��� */
 #define N 8
 void bubble_sort(int a[],int n)
 { /* ��a�����������������г���С�����������������(��������) */
   int i,j,t;
   Status change;
   for(  )          /*�˴���дforѭ�������������ʽ*/
   {
     change=FALSE;
     for(j=0;j<i;++j)
       if(  )        /*�˴���д����*/
       {
         t=a[j];
         a[j]=a[j+1];
         a[j+1]=t;
                       /*�˴���дһ�����*/
       }
   }
 }

 void print(int r[],int n)
 {
   int i;
   for(i=0;i<n;i++)
     printf("%d ",r[i]);
   printf("\n");
 }

 main()
 {
   int d[N]={49,38,65,97,76,13,27,49};
   printf("����ǰ:\n");
   print(d,N);
   bubble_sort(d,N);
   printf("�����:\n");
   print(d,N);
   getch();
}
