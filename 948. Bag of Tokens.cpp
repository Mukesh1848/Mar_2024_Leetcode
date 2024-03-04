//   948. Bag of Tokens

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
      
       if(tokens.size() == 0) return 0;
        sort(tokens.begin(),tokens.end());
        int currScore =0;
        int low = 0;
        int high = tokens.size()-1;
        int  maxScore =0;
        // base case 
        if(tokens[low] > power) return 0;

        while(low <= high){
             if(power >= tokens[low]){
                 power -= tokens[low];
                 low++;
                 currScore++;
                 maxScore = max(maxScore,currScore);
             }
             else{
                 power += tokens[high];
                 high--;
                 currScore--;
             }
        }

        return  maxScore;
    }
};
