class Solution {
public:
    
     
    void merge(vector<int>& arr ,int l, int mid, int r,vector<pair<int,int>>& v,vector<int>& count){
     
     vector<pair<int,int>> temp(r-l+1);
        int i = l;
        int j= mid + 1;
        int k = 0;
        
        while(i<=mid && j<=r){                                                    // Step 4
            if(v[i].first<=v[j].first) temp[k++] = v[j++];
            else{
                count[v[i].second] += r-j+1;
                temp[k++] = v[i++];
            }
        }
        
        while(i<=mid){
            temp[k++] = v[i++];
        }
        while(j<=r){
            temp[k++] = v[j++];
        }
        
        for(int i=l;i<=r;i++){
            v[i] = temp[i-l];
        }
   
        
    }
    void mergesort(vector<int>& arr, int l, int r,vector<pair<int,int>>& v,vector<int>& count) {
      if(l>=r) return ;
        int mid = (l+r)/2;
        mergesort(arr,l,mid,v,count);
        mergesort(arr,mid+1,r,v,count);
        merge(arr,l,mid,r,v,count);
        
    }
    vector<int> countSmaller(vector<int>& nums) {
      int n= nums.size() ;
        vector<pair<int,int>> v(n) ;
       for(int i=0;i<n;i++) v[i]= {nums[i],i} ;
        vector<int> count(n,0);
        mergesort(nums,0,n-1,v,count) ;
      return count;
     }
}; 