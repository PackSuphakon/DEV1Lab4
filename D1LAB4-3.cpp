#include <iostream>
using namespace std;

int main(){
	int s1, s2, s3; //s1=first side s2=secside s3=third side//
	char tri;
	
	cin >> s1;
	cin >> s2;
	cin >> s3;
	
	if((s1+s2> s3) && (s1+s3> s2) && (s2+s3> s1)){
		if(s1!=s2 && s2!=s3 && s3!=s1){
			cout << "Scalene" << endl;
			return 0;
		}else
		if(s1 == s2 && s2 == s3){
			cout << "Equilateral" << endl;
			return 0;
		}else
		if(s1 == s2 && s2 != s3){
			cout << "Isosceles" << endl;
			return 0;
		}
		
		
	} else{
		cout << "No" << endl;
	}
	
	

	
}
