#include <stdio.h>
void fun();
int main(){
    printf("I am inside main\n");
    fun();
    fun();
    fun();
    return 0;
}
void fun()
{
    int a =  1000;
    static int b=1;
    int c=180;
    printf("i am inside fun\n");
    printf("%d %d %d\n",a,c,b);
    a++;
    b++;
    c++;

}