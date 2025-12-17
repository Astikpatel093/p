// #include <stdio.h>
// char str[100];
//     int count = 0;
// int  st(){
//     for(int i = 0; str[i] != '\0'; i++) {
//         count++;
//     }

// }

// void main() {
    

//     printf("Enter a string\n");
//     scanf("%s", str);  

// int k=st(str);
// printf("%d",k);
    
// }

#include <stdio.h>
int sl(char str[]){
    int i=0;
    while (str[i]!='\0'){
i++;
    }
    return i;
}
void main(){
    char str[100];
    int length;

    printf("Enter a string\n");
    gets(str);

    length = sl(str);
    printf("%d",length);

}
