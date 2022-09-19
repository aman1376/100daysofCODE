//Subset SUM 2
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> v;
        sort(nums.begin(),nums.end());
        func(0,nums,v,res);
        return res;
    }
    void func(int ind,vector<int> &nums,vector<int> &v,vector<vector<int>> &res){
    res.push_back(v);
    for(int i=ind;i<nums.size();i++){
        if(i != ind && nums[i] == nums[i - 1]) continue;
        v.push_back(nums[i]);
        func(i+1,nums,v,res);
        v.pop_back();
        }
    }
};
//COMBINATION SUM
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        func(candidates,0,target,v,ans);
        return ans;
    }
    void func(vector<int>& a,int ind,int target,vector<int> &v,vector<vector<int>> &ans){
        if(ind==a.size()){
            if(target==0)   ans.push_back(v);
            return;
        }
        if(a[ind]<=target){
            v.push_back(a[ind]);
            func(a,ind,(int)target-a[ind],v,ans);
            v.pop_back();
        }
        func(a,ind+1,target,v,ans);
    }
};