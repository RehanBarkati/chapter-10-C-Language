# include<stdio.h>

int main(){
    FILE *ptr1;
    FILE *ptr2;
    ptr1=fopen("a.txt","r");
    char c=fgetc(ptr1);
    ptr2=fopen("b.txt","w");

while(c!=EOF){
      fputc(c,ptr2);
      c=fgetc(ptr1);

}
    return 0;
}