#include <iostream>
using namespace std;
bool isPowerOfThree(int n){
	if (n == 1){
		return true;
	}
	else if(n == 0){
		return false;
	}
	else{
		bool flag = false;
		if (n%3==0){flag = true;}
		else{flag = false;return flag;}
		n = n / 3;
		flag = isPowerOfThree(n); 
	}
	return flag;
}
int main(){
	int n = 3;
	bool flag = isPowerOfThree(n);
	cout<<'\n';
	cout<<flag<<'\n';
	return 0;
}