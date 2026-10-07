#include<iostream>
using namespace std;

int main(){ 
	float number1, number2, result;
	char operator_;
	

	cout<<"Enter 1st number:"<<endl;
	cin>>number1;
	cout<<"Enter 2nd number:"<<endl;
	cin>>number2;
	cout<<"Enter operator(+, -, *, /):"<<endl;
	cin>>operator_;
	
	switch(operator_){
		
	    case'+':
	    	result=number1 + number2;
	    	cout<<"Result :"<<result<<endl;
	    	break;
	    	
	    case'-':
	    	result=number1 - number2;
	    	cout<<"Result :"<<result<<endl;
	    	break;
	    	
	    case'*':
	    	result=number1 *number2;
	    	cout<<"Result :"<<result<<endl;
	    	break;
	    
	    case'/':
	    	 if(number2 != 0){
	    	result=number1 / number2;
	    	cout<<"Result :"<<result<<endl;
			 }
			 else{
                cout<<"Error: Division by zero is not allowed."<<endl;
            }
	    	break;
	    
	     default:
            cout<<"Invalid operator."<<endl;
    }
    return 0;
	    	
	}