#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int hoursWorked;
    float salaryManager, minimunSalary, salaryTotal, salaryAdjust, halfSalary, faxSalary;

} workManager;

double hourSalaryWork(double minimunSalary, double manageSalaray);
double growSalary(int hour, double minimunManageSalaray);
double grossSalaryTax(double grossSalary);

int main() {

    workManager workManager;
    
    workManager.minimunSalary = 1621;

    printf("Write number of the hours working: \n");
    scanf("%d", &workManager.hoursWorked);

    workManager.halfSalary = hourSalaryWork(workManager.minimunSalary, workManager.salaryManager);
    workManager.salaryAdjust = growSalary(workManager.hoursWorked, workManager.halfSalary);
    workManager.salaryTotal = grossSalaryTax(workManager.salaryAdjust);

    workManager.faxSalary = workManager.salaryAdjust - workManager.salaryTotal;

    printf("Fax: %.2f \n", workManager.faxSalary);
    printf("Your salary: %.2f", workManager.salaryTotal);

    return 0;
}
 

double hourSalaryWork(double minimunSalary, double minimunManageSalaray) {

    minimunManageSalaray = minimunSalary / 2.0;
    return minimunManageSalaray;

}

double growSalary(int hour, double minimunManageSalaray) {

    minimunManageSalaray *= hour;
    return minimunManageSalaray;

}

double grossSalaryTax(double grossSalary) {

    double tempGrossSalary = 0;
    tempGrossSalary = grossSalary * 0.03;
    grossSalary -= tempGrossSalary;
    return grossSalary;

}