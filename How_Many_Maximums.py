class Solution {
public:
    bool isPossible(vector<int>& target) {
        int len = target.size(),sum = 0;
        priority_queue<int> que;
        for(int i = 0; i < len;i++)
            que.push(target[i]),sum += target[i];
        if(sum == len)
            return true;
        if(sum < (2*len -1))
            return false;
        int top,diff;
        while(sum > len){
            
            top = que.top();
            que.pop();
            diff = sum - top;
            sum = top;
            top -= diff;
            que.push(top);
        }
        if(sum == len)
            return true;
        
        return false;
    }
};