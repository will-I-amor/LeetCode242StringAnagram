#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	map<char,int>roman;
	string s = "MCMXCVI";
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        int sum = 0;
        for (int i = 0;i<s.length();++i){
            if(s[i]=='I' &&s[i+1]=='V'){
                sum = sum + 4;
                i = i + 1;
            }
            else if (s[i]=='I' &&s[i+1]=='X'){
                sum = sum + 9;
                i = i + 1;
            }
            else if(s[i]=='X' &&s[i+1]=='L'){
                sum = sum + 40;
                i = i + 1;
            }
            else if(s[i]=='X' &&s[i+1]=='C'){
                sum = sum + 90;
                // cout<<"s[i]: "<<s[i]<<'\n';
                // cout<<"sum: "<<sum<<'\n';
                i = i + 1;
                cout<<"i: "<<i<<'\n';
            }
            else if(s[i]=='C' &&s[i+1]=='D'){
                sum = sum + 400;
                i = i + 1;
            }
            else if(s[i]=='C' &&s[i+1]=='M'){
                sum = sum + 900;
                // cout<<"s[i]: "<<s[i]<<'\n';
                // cout<<"sum: "<<sum<<'\n';
                i = i + 1;
            }
            else{
                sum = sum + (roman.find(s[i])->second);
                // cout<<"s[i]: "<<s[i]<<'\n';
                // cout<<"i: "<<i<<'\n';
                // cout<<"sum: "<<sum<<'\n';
                // cout<<'\n';
                // cout<<'\n';
            }
        }
        cout<<sum<<'\n';
        return sum;
	return 0;
}