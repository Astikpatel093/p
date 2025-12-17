// #include <stdio.h>

// typedef struct work {
//     char employee[100];
//     char ch;
//     int basicp;
//     float grosssalary;
//     float DA;
   
// } w;


// void main(){

    
//     w emp;
   

//     printf("Enter the name:\n ");
//     scanf("%99s", emp.employee);
//      printf("Enter the basicp: \n");
//     scanf("%d ", emp.basicp);
     

    

  

// emp.DA=52;
//  emp.grosssalary=emp.basicp+((emp.DA)/100);


    
//       printf("%99s %f",emp.employee,emp.grosssalary);

// }


#include <stdio.h>

typedef struct work {
    char employee[100];
    int basicp;
    float grosssalary;
    float DA;
} w;

void main() {

    w emp;

    printf("Enter the name: ");
    scanf("%99s", emp.employee);

    printf("Enter the basic pay: ");
    scanf("%d", &emp.basicp);

    
    emp.DA = (emp.basicp * 52) / 100.0;

    
    emp.grosssalary = emp.basicp + emp.DA;

    printf("Employee Name : %s\n", emp.employee);
    printf("Gross Salary  : %.2f\n", emp.grosssalary);

    
}
