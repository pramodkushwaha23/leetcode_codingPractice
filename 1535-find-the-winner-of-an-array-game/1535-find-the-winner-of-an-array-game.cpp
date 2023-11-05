int speedup = []{ios::sync_with_stdio(0); cin.tie(0); return 0;}();
class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int winner=arr[0]; // current winner...
        int winners_cnt=0; // rounds won by our current winner 
        for(int i=1;i<arr.size();i++){
            if(winner>arr[i]){
                // our current winner has won one more round
                winners_cnt++;
            }
            else if(winner<arr[i]){
                // our winner has been changed...
                winner=arr[i];
                winners_cnt=1;
            }
            if(winners_cnt==k){
                // we have to check whether count of rounds won by current winner is k or not...
                return winner;
            }
        }
        return winner;
    }
};