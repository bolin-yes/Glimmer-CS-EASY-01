#include <stdio.h>

int main() {
    int m,n,i,d;//m，n为要输入的数，i为循环次数，d为不断迭代的公约数
    printf("请输入两个数：");
    scanf("%d%d",&m,&n);
     if(m>0 && n<2^31){
    for (i=1;i<=m || i<=n;i++)
    {    
       if (m%i==0 && n%i==0)
       {
        d=i;//当满足能整除m和n时，将i的值赋给d，不断循环直到最大公约数为止
       } 
    }  
    printf("%d",d);
    }
    else{
        printf("error,please re-enter m and n");
    }
   return 0;
}