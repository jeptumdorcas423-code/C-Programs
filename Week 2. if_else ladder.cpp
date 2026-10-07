#include<iostream>
using namespace std;

int main() {
	string student_name;
	int exam_marks;
	char grade;
	
	cout<<"Enter Student Name:"<<endl;
	cin>>student_name;
	
	cout<<"Enter Exam Marks:"<<endl;
	cin>>exam_marks;
	
	if (exam_marks>=70){
		grade='A';
	}
	else if(exam_marks>=60){
		grade='B';
			}
	else if (exam_marks>=50){
		grade='c';
	}
else if(exam_marks>=40){
	grade='D';
}
else{
	grade='E';
}

cout<<"\n"<<endl;
cout<<"STUDENT NAME :"<<student_name<<endl;
cout<<"EXAM MARKS: "<<exam_marks<<endl;
cout<<"GRADE:"<<grade<<endl;

return 0;
}