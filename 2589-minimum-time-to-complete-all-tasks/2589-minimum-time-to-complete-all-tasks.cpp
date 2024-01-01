class Solution {
public:
    int findMinimumTime(vector<vector<int>>& tasks) {
        bool timeOn[2001] = {};
        sort(begin(tasks),end(tasks), [](const auto &t1, const auto &t2){
            return t1[1]<t2[1];
        });

        for(auto &task : tasks){
            int start = task[0], end=task[1], duration = task[2];
            for(int i=start;i<=end;i++) if(timeOn[i]) duration--;
            for(int i=end;duration>0;i--){
                if(timeOn[i]) continue;
                duration--;
                timeOn[i] = true;
            }
        }

        int count = 0;
        for(int i=1;i<=2000;i++)
            count+=timeOn[i];
        return count;
    }
};