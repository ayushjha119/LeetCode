class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        // wo  city jo kisi ke satrt mai nhi hai

        unordered_set<string> starting;
        for(auto & e: paths)
            starting.insert(e[0]);
        for(auto &e: paths)
            if(starting.count(e[1])==0)
                return e[1];
        return "";
    }
};