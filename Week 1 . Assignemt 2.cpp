#include <iostream>
using namespace std;

int main () {
	int Practical_marks,Average_score,Theory_marks;
	string Student_name,result;
	
    cout<<"Enter Student Name:"<<endl;
	cin>>Student_name;
	cout<<"Enter Theory marks,:"<<endl;
	cin>>Theory_marks;
	cout<<"Enter Practical marks,:"<<endl;
	cin>>Practical_marks;
	
	Average_score= (Theory_marks + Practical_marks)/2 ;
	
	
	if (Average_score>=50){
		result="pass";
	}
	else {
		result="fail";
	}
	
	cout<<"Student Name:"<<Student_name<<endl;
	cout<<"Theory marks:"<<Theory_marks<<endl;
	cout<<"Practical marks:"<<Practical_marks<<endl;
	cout<<"Average Score:"<<Average_score<<endl;
	cout<<"RESULT:"<<result<<endl;
}