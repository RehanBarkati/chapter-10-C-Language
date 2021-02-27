# include<stdio.h>

int main(){
    FILE *ptr;
    char name[5][15];
    int salary[5];
    for(int i=0;i<5;i++){
     printf("Name[%d]: ",i+1);
     scanf("%s",name[i+1]);
     printf("salary[%d]: ",i+1);
     scanf("%d",&salary[i]);
    }
  
 ptr=fopen("output.txt","w");
for( int i=0;i<5;i++){
   fprintf(ptr,"%s , %d ",name[i+1],salary[i+1]);
   fprintf(ptr," ");
}
fclose(ptr);

    return 0;
}