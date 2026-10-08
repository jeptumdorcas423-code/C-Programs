#include <iostream>
using namespace std;


void getEmployeeDetails( string &employee_name , float &basic_salary, float &overtime_hours ,float &rate_per_hour)
{
	
	cout<<"Enter Employee Name:"<<endl;
	cin>>employee_name;
	cout<<"Enter Basic Salary:"<<endl;
	cin>>basic_salary;
	cout<<"Enter Overtime Hours:"<<endl;
	cin>>overtime_hours;
	cout<<"Enter Rate Per Hour:"<<endl;
	cin>>rate_per_hour;
}
	
	float calculateovertime_pay(float overtime_hours, float rate_per_hour)
	{
     return overtime_hours * rate_per_hour;
	}
	
    float calculateNetsalary(float overtime_pay,float basic_salary)
    {
	return basic_salary + overtime_pay;
	}
	
	void displayPayslip(string employee_name , float basic_salary, float overtime_hours ,float rate_per_hour, float overtime_pay, float Netsalary) 
	{
		
	cout<<"==============="<<endl;
	cout<<"PAYSLIP"<<endl;
	cout<<"==============="<<endl;
	cout<<"Employee Name:"<<employee_name<<endl;
	cout<<"Basic Salary:"<<basic_salary<<endl;
	cout<<"Rate Per Hour:"<<rate_per_hour<<endl;
	cout<<"Overtime pay:"<<overtime_pay<<endl;
	cout<<"Net Salary:"<<Netsalary<<endl;
	
	}
	
	int main (){
	string employee_name;
	float basic_salary, Netsalary;
	float overtime_hours, rate_per_hour, overtime_pay;
	
	
	getEmployeeDetails( employee_name ,basic_salary,  overtime_hours , rate_per_hour);
	
	overtime_pay= calculateovertime_pay( overtime_hours, rate_per_hour);
	
	Netsalary= calculateNetsalary( overtime_pay, basic_salary);
	
	displayPayslip(employee_name, basic_salary, overtime_hours,
               rate_per_hour, overtime_pay, Netsalary);	
	
	
	return 0;
	
	
	
	
}
