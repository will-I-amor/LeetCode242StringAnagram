class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        if(nums.size()==0){
            return false;
        }
	    std::map<int,int> myMap;
	    std::pair<map<int,int>::iterator,bool>ret;
	    for(int i = 0; i<nums.size();i++){
	    	ret = myMap.insert(std::pair<int,int>(nums[i],i));
	    	if (ret.second == false){
		    	flag = true;
		    	break;
	    }
        }
        return flag;
    }
};