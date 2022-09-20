#SUBSET_2

class Solution {
public:
    void sum(vector<int> nums,set<vector<int>> &sol,vector<int> n){
        if(nums.empty()){
           // sort(n.begin(),n.end());
            sol.insert(n);
            return;
        }
        vector<int> n1=n;
        vector<int> n2=n;
        n2.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        sum(nums,sol,n1);
        sum(nums,sol,n2);
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> sol;
        vector<int> n;
        sort(nums.begin(),nums.end());
        sum(nums,sol,n);
        // for(auto it:sol){
        //     cout<<it;
        // }
//         set<vector<int>> s;
//         for(int i=0;i<s.size();i++){
            
//             s.insert(sol[i]);
//         }
         vector<vector<int>> ans;
        for(auto it:sol){
            ans.push_back(it);
        }
        return ans;
    }
};

#Kth_Symbol_in_grammar

class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1 && k == 1)
            return 0;
        int mid=(pow(2,n-1))/2;
        if(k>mid){
            return !kthGrammar(n-1,k-mid);
        }
        else
            return kthGrammar(n-1,k);
    }
};

#Subset_Sums

class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1 && k == 1)
            return 0;
        int mid=(pow(2,n-1))/2;
        if(k>mid){
            return !kthGrammar(n-1,k-mid);
        }
        else
            return kthGrammar(n-1,k);
    }
};