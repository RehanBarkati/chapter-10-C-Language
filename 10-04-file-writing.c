# include<stdio.h>

int main(){
    FILE *fptr; //or ptr
    int number=40;
    fptr=fopen("generated.txt","w");
    fprintf(fptr,"The number is %d\n",number);
    fprintf(fptr,"Thanks for using fprintf !!");
    fclose(fptr);
    return 0;
}