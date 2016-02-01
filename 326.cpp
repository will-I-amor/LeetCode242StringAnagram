#include <iostream>
using namespace std;
bool isPowerOfThree(int num){
	if(num%3 == 0){
		int rem = num / 3;
		bool flag = isPowerOfThree(rem);
		return flag;
	}
	else if(num == 0){
		return false;
	}
	else if(num%3!=0 && num%3!=1){
		return false;
	}
	else if (num%3==1){
		return true;
	}
	else if(num == 1){
		return true;
	}
	else{
		return false;

	}
}
int main(){
	int n = 0;
	bool flag = isPowerOfThree(n);
	if (flag){
		cout<<"n = "<<n<<" is power of three"<<'\n';
	}
	else{
		cout<<"false"<<'\n';
	}
	return 0;
}