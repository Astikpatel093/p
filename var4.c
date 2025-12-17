 #include <stdio.h>
 void Hello(){
     static int n=1;
      printf("%d\n",n);
     n+=1;
    
     
 }
 void main(){
    Hello();
    Hello();
    Hello();
    Hello();
    Hello();
    Hello();
    

 }