//   1750. Minimum Length of String After Deleting Similar Ends

class Solution {
public:
    int minimumLength(string s) {
         
         int low = 0;
         int high = s.size()-1;

         while(low < high && s[low] == s[high]){
             char c = s[low];

             while(low <= high && s[low] == c){
                 low++;
             }

             while(high > low && s[high] == c){
                 high--;
             }
         }

         return high-low+1;
    }
};
