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
                         sort(rec.begin(),rec.end());
                         for(vector<int>l:rec2){
                             if(rec==l){
                                 rec.clear();
                                 break;
                             }
                         }
                        if(false==rec.empty()) {
                            rec2.push_back(rec);
                            rec.clear();
                        }

                    }

                }
            }
        }
        return rec2;
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


