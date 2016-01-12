#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
	map<int,int> myMap;
	int myInts[] = {16,2,77,29,16};
	vector<int> myVec (myInts,myInts + sizeof(myInts) / sizeof(int));
	std::pair<map<int,int>::iterator,bool>ret;
	for(int i = 0; i<myVec.size();i++){
		ret = myMap.insert(std::pair<int,int>(myVec[i],i));
		if (ret.second == false){
			cout<<"element "<<myVec[i]<<" already existed";
			cout<<" with a value of "<<ret.first->second<<"\n";
		}
	}




	return 0;
}



