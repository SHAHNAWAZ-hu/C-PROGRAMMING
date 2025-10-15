/*
NAME:SAYYED SHAHNAWAZ
DIV:C
BRANCH:COMPS
DATE:15/10/2025
*/
#include<stdio.h>

int main()
 {
     int rows;
     printf("ENTER A NUMBER");
     scanf("%d",&rows);
     int i = 0;
   for(i; i <=rows; i++) {
    int j=1;
       for(j;j <=i; j++){
        printf("* ");
   }
    printf("\n");
   }
}
