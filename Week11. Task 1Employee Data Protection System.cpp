#include<iostream>
#include<string>
using namespace std;

class Employee{
	private:
		string employee_name;
		int employee_id;
		double basic_salary;
		
   
   	 public:
   	 	void setEmployeeDetails(string a,double b,int e){
				employee_name=a;
				employee_id=e;
				basic_salary=b;
			}
			
     double calculateSalary(){
		 return basic_salary + (0.10* basic_salary);
	 }  
	 
	 void displayEmployeeDetails(){
		 cout<<"Employee name: "<<employee_name<<endl;
		 cout<<"Employee ID: "<<employee_id<<endl;
		 cout<<"Basic salary:"<<basic_salary<<endl;
		 cout<<"Net Salary:"<<calculateSalary()<<endl;
	 }
};

int main() {
	Employee E1;
	
	E1.setEmployeeDetails("Dorcas Carl", 50000, 12);
	
	E1.displayEmployeeDetails();
	
	return 0;
}