#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> rec2;
        if (true==nums.empty()) {
            rec2.clear();
            return rec2;
        }
        else if(nums.size()<3) {

            rec2.clear();
            return rec2;
        }
        vector<int> rec;
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                for(int k=j+1;k<nums.size();k++){
                    if((nums[i]+nums[j]+nums[k])==0){
                         rec.push_back(nums[i]);
                         rec.push_back(nums[j]);
                         rec.push_back(nums[k]);
                        vector<int> linshi=eliminateRepetition(rec2,rec);
                        if(false==linshi.empty()) rec2.push_back(linshi);
                         rec.clear();
                    }

                }
            }
        }
        return rec2;
    }
    vector<int> eliminateRepetition( vector<vector<int>> rec2,vector<int> nums){

        for(vector<int>num:rec2){
            int count=0;
            for(int i:nums){
                for(int j=0;j<num.size();j++){
                    if(i==num[j]) {
                        count++;
                        if (count==nums.size()){
                            nums.clear();
                            return nums;
                        }
                        num.erase(num.begin()+j);
                        break;
                         }
                    }
                if(count==0) break;


                }
            }

           return nums;

        }

};
int main(){

        Solution* text=new Solution();
        vector<int>vint;
        vint.push_back(-4);
        vint.push_back(-2);
        vint.push_back(-2);
        vint.push_back(-2);
        vint.push_back(0);
        vint.push_back(1);
        vint.push_back(2);
        vint.push_back(2);
        vint.push_back(2);
        vint.push_back(3);
        vint.push_back(3);
        vint.push_back(4);
        vint.push_back(4);
        vint.push_back(6);
        vint.push_back(6);

        vector<vector<int>> output=text->threeSum(vint);
        for(vector<int>i:output){
            for(int j=0;j<i.size();j++){
                   cout<<i[j];
            }
            cout<<endl;

        }



    return 0;
}


