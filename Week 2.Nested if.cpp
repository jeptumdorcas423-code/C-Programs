#include<iostream>
using namespace std;

int main(){ 
	
	string student_name;
	int age, exam_score;
	
	cout<<"Enter Student Name: "<<endl;
	cin>>student_name;
	cout<<"Enter Age:"<<endl;
	cin>>age;
	cout<<"Enter Exam Score:"<<endl;
	cin>>exam_score;
	
	if(age>=18){
		
		
		 if(exam_score>=50){
		 	cout<<"Admitted"<<endl;
		 }
		 else{
			 cout<<"Not Admitted: Low Score";
		 }
	}
	 else{
			 cout<<"Not Admitted: Underage"<<endl;
		 }
	
	cout<<"\n"<<endl;	 
	cout<<" STUDENT NAME:"<<student_name<<endl;
	cout<<" AGE:"<<age<<endl;
	
	return 0;
}