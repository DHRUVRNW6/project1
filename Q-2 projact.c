#include <stdio.h>

int main(){
float base_salary, hra, da, ta, gross_salary;

printf("Enter the base salary: ");
scanf("%f", &base_salary);

printf("Enter the HRA percentage: ");
scanf("%f", &hra);

peintf("Enter DA percentage:");
scanf("%f", &da);

printf("Enter TA percentage:");
scanf("%f", &ta);

gross_salary = base_salary + (base_salary * hra / 100) + (base_salary * da / 100) +
(base_salary * ta / 100);

printf("Gross salary: Rs. %.2f", gross_salary);

return 0;
}