# include<stdio.h>

int main(){
    FILE *ptr1;
    FILE *ptr2;
    int a,b,c;
    ptr1=fopen("rehan.txt","r");
    fscanf(ptr1,"%d %d %d",&a,&b,&c);
    fclose(ptr1);
    ptr1=fopen("rehan.txt","w");
    fprintf(ptr1,"%d %d %d",3*a,3*b,3*c);
    return 0;
}