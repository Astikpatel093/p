#include <stdio.h>
#include <string.h>
void main(){
typedef struct record{
char name[20];
int age;
int tm;
float run;
} record ;

record arr[20];

for(int i=0;i<20;i++){
    scanf("%s",&arr[i].name);
    scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].tm);
    scanf("%f",&arr[i].run);
    

}
for(int i=0;i<20;i++){
    printf("%s\n",arr[i].name);
    printf("%d\n",arr[i].age);
    printf("%d\n",arr[i].tm);
    printf("%f\n",arr[i].run);
    
}

}


