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
        sort(nums.begin(),nums.end());

        for(int i=0;nums[i]<=0;i++){
            for(int j=int(nums.size())-1;nums[j]>=0 and i<j+1;j--){
                for(int k=i+1;k<j;k++){
                    if((nums[i]+nums[j]+nums[k])==0){
                         rec.push_back(nums[i]);
                         rec.push_back(nums[k]);
                         rec.push_back(nums[j]);
                        switch (nums[i]){
                            case 0:
                                if(nums[j]==0){
                                    rec2.push_back(rec);
                                    return rec2;
                                }
                        }
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
        vint.push_back(-3);
        vint.push_back(-2);
        vint.push_back(-2);
        vint.push_back(0);
        vint.push_back(0);
        vint.push_back(0);
    vint.push_back(10);


        vector<vector<int>> output=text->threeSum(vint);
        for(vector<int>i:output){
            for(int j=0;j<i.size();j++){
                   cout<<i[j];
            }
            cout<<endl;

        }



    return 0;
}


