  /*阅读下面起泡排序的程序，填写空白处。运行程序。 */
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

/*调用起泡排序(在教科书1.4.3 算法效率的度量中)的程序 */
 #define N 8
 void bubble_sort(int a[],int n)
 { /* 将a中整数序列重新排列成自小至大有序的整数序列(起泡排序) */
   int i,j,t;
   Status change;
   for(  )          /*此处填写for循环语句的三个表达式*/
   {
     change=FALSE;
     for(j=0;j<i;++j)
       if(  )        /*此处填写完整*/
       {
         t=a[j];
         a[j]=a[j+1];
         a[j+1]=t;
                       /*此处填写一条语句*/
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
   printf("排序前:\n");
   print(d,N);
   bubble_sort(d,N);
   printf("排序后:\n");
   print(d,N);
   getch();
}
