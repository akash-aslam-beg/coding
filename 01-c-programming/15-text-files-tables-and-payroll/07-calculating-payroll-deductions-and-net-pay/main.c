#include <stdio.h>

typedef struct {
  int id;
  float basic_salary;
  float allowances;
  float deductions;
} employee_record;

int main(void) {
  
  FILE *payroll_input_file = fopen("payroll_input.txt", "w");
  if (payroll_input_file == NULL) {
    printf("Error opening payroll input file.\n");
    return 1;
  }

  employee_record employee;
  printf("Enter the employee ID: ");
  if (scanf("%d", &employee.id) != 1) return 1;
  printf("Enter the employee basic salary: ");
  if (scanf("%f", &employee.basic_salary) != 1) return 1;
  printf("Enter the employee allowances: ");
  if (scanf("%f", &employee.allowances) != 1) return 1;
  printf("Enter the employee deductions: ");
  if (scanf("%f", &employee.deductions) != 1) return 1;

  fprintf(payroll_input_file, "%d %f %f %f\n", employee.id, employee.basic_salary, employee.allowances, employee.deductions);

  fclose(payroll_input_file);

  float pf = employee.basic_salary * 0.1;
  float gross_salary = employee.basic_salary + employee.allowances;
  float net_salary = gross_salary - employee.deductions - pf;

  FILE *payroll_output_file = fopen("payroll_output.txt", "w");
  if (payroll_output_file == NULL) {
    printf("Error opening payroll output file.\n");
    return 1;
  }

  fprintf(payroll_output_file, "Employee ID: %d\n", employee.id);
  fprintf(payroll_output_file, "Basic Salary: %f\n", employee.basic_salary);
  fprintf(payroll_output_file, "Allowances: %f\n", employee.allowances);
  fprintf(payroll_output_file, "Deductions: %f\n", employee.deductions);
  fprintf(payroll_output_file, "PF: %f\n", pf);
  fprintf(payroll_output_file, "Gross Salary: %f\n", gross_salary);
  fprintf(payroll_output_file, "Net Salary: %f\n", net_salary);

  fclose(payroll_output_file);

  return 0;
}
