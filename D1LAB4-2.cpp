#include <iostream>
using namespace std;

int main(){
	double num1, num2, result;
	char ch;
	
	cin >> num1;
	cin >> num2;
	cin >> ch;
	
	if(ch != '+' &&
	   ch != '-' &&
	   ch != '*' &&
	   ch != '/' &&
	   ch != '>'){
	   	
	   	cout << "invalid mark!!" << endl;
	   	
	   	return 0;
	   }
	   
	   if(ch == '>'){
	   	
	   	return 0;
	   }
	
	
	
	
	switch(ch){
		case '+' : result = num1 + num2;
		cout << result << endl; break; 
		case '-' : result = num1 - num2;
		cout << result << endl; break; 
		case '*' : result = num1 * num2;
		cout << result << endl; break; 
		case '/' : result = num1 / num2;
		cout << result << endl; break; 
		
		
		
	}
	
	
}
