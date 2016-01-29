#include <iostream>
using namespace std;
bool isUgly(int num){
	bool flag = true;
	if (num == 0){
		return false;
	}
	else{
			if(num%2==0){
				num = num / 2;
				cout<<"haha"<<'\n';
				flag = isUgly(num);
			}
			else if(num%3==0){
				num = num / 3;
				//cout<<"num is: "<<num<<'\n';
				//cout<<"haha"<<"\n";
				flag = isUgly(num);
			}
			else if(num%5==0){
				num = num / 5;
				cout<<num<<'\n';
				flag = isUgly(num);
			}
			else if (num == 1){
				return true;
			}
			else{
				cout<<"num is: "<<num<<'\n';
				flag = false;
			}
		}
	return flag;
}
int main(){
	int a = 21233664;
	//int a = 4;
	cout << a << '\n';
	bool flag = isUgly(a);
	if(flag){
		cout<<"a = "<<a<<" is an ugly number"<<'\n';
	}
	else{
		cout<<"a is NOT an ugly number"<<'\n';
	}
}