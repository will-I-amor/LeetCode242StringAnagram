#include <iostream>
#include <array>
using namespace std;
int main(){
	array<int,7>foo = {2,3,7,7,9,7,7};
	int n = foo.size();
	int count = 0;
	int major = 0;
	for(int i = 0; i<n;i++){
		if(!count){
			major = foo[i];
			count = 1;
		}
		else{
			count += (major==foo[i]) ? 1 : -1;
		}
	}
	cout<<major<<endl;

	return 0;
}



