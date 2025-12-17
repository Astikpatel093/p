#include <stdio.h>
typedef union str{
    char name[100];
    char home_address[100];
    char hostel_address[100];
    char city[100];
    char state[100];
    char zip[100];

}str;
void display(str b){
  
    printf("%s\n",b.home_address);
    
}
void main(){
    str n;
printf("Enter the name\n");
scanf("%s ",n.name);
printf("Enter the home_address\n");
scanf("%s ",n.home_address);
printf("Enter the hostel_address\n");
scanf("%s ",n.hostel_address);
printf("Enter the city\n");
scanf("%s ",n.city);
printf("Enter the state\n");
scanf("%s ",n.state);
printf("Enter the zip\n");
scanf("%s ",n.zip);
display(n);
}
