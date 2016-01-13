#include <iostream>
#include <map>
#include <array>
using namespace std;
//这个方法只打败了1%的人，也是醉了。总共有6钟方法
int main(){
  array<int, 3>myArray = {3,3,4};
  map<int,int>myMap;
  pair<map<int,int>::iterator, bool>ret;
  map<int,int>::iterator it;
  for(int i = 0; i<myArray.size();++i){
     ret = myMap.insert(pair<int,int>(myArray[i],1));
     if(ret.second == false){
         it = myMap.find(myArray[i]);
         int temp = it->second;
         myMap.erase(myArray[i]);
         myMap.insert(pair<int,int>(myArray[i],temp + 1));
     }
     else{
         myMap.insert(pair<int,int>(myArray[i],1));
     }
  }
  for(it = myMap.begin();it!=myMap.end();++it){
    cout<<it->first<<" => "<<it->second<<'\n';
  }
  int max = 0;
  int maxKey = 0;
  for(it = myMap.begin();it!=myMap.end();++it){
      if(it->second >= max){
          max = it->second;
          maxKey = it->first;
      }
  }
  cout<<"max is: "<<max<<'\n';
  cout<<"maxKey is: "<<maxKey<<'\n';
  return maxKey;
}
