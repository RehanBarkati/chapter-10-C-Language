# include<stdio.h>

int main(){
    FILE *ptr;
    int num,num1,num2;
  
    ptr=fopen("rehan.txt","r");
      fscanf(ptr,"%d",&num);
      fscanf(ptr,"%d",&num1);
      fscanf(ptr,"%d",&num2);
     
     fclose(ptr);

    printf("The value of num is %d\n",num);
    printf("The value of num1 is %d\n",num1);
    printf("The value of num2 is %d\n",num2);
   
    return 0;
}