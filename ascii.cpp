#include <iostream>
#include <string>
#include <array>
#include <time.h>
using namespace std;
bool isAnagram(string s, string t){
	bool flag = true;
	if(s.size()!=t.size()){
		return false;
	}
	else if(s.size()==0 && t.size()==0){
		return true;
	}
	else{
		array<int,26> num_s = {0};
		array<int,26> num_t = {0};
		for(char&c:s){
			num_s[int(c)-97] = num_s[int(c)-97] + 1;
		}
		for(char&c:t){
			num_t[int(c)-97] = num_t[int(c)-97] + 1;
		}
		for(int i = 0; i<num_s.size();i++){
			if(num_s[i]!=num_t[i]){
				//cout<<"i: "<<i<<" nums[i]: "<<num_s[i]<<" != "<<num_t[i]<<endl;
				flag = false;
				break;
			}
			else{
				flag = true;
			}
		}
		return flag;
	}
	
}
int main()
{
	// clock_t startTime;
	// clock_t endTime;
	//double elapsedTime;
	string s = "anagram";
	string t = "abcdefg";
	//startTime = clock();
	bool flag = isAnagram(s,t);
	//elapsedTime = (double(clock() - startTime) / CLOCKS_PER_SEC)*1000.0;
	//cout<<elapsedTime<<"ms to run\n";
	if(flag == true){
		cout<<"  It's true"<<endl;
	}
	else{
		cout<<"  It's false"<<endl;
	}
	return 0;
}



