class Solution {
public:
    int pivotIndex(vector<int>& v) {
        
//         vector<int>v1;
        
//     for(int i=0;i<v.size();i++){
//        v1.push_back(v[i]);
//     }
        
//     for(int i=1;i<v.size();i++){
//         v[i]=v[i-1]+v[i];
//     }
//         int k=v[v.size()-1];
//         int left=0,right=0;
        
//         for(int j=0;j<v.size();j++){
            
//             left=v[j]-v1[j];
//             right=v[v.size()-1]-left-v1[j];
            
//             if(left==right){
//                 return j;
//             }
            
//         }
//         return -1;
//     }
     
        //with out extra space 

 int right_sum=0,left_sum=0;
        
 for(int i=0;i<v.size();i++){
       right_sum+=v[i];
   }
        
  for(int i=0;i<v.size();i++){
       right_sum=right_sum-v[i];
      
      if(right_sum==left_sum){
          return i;
      }
      
      left_sum+=v[i];
   }
   
        return -1;
    }
};