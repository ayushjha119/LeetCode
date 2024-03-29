class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram_map;
    
    for (const auto& str : strs) {
        string sorted_str = str;
        sort(sorted_str.begin(), sorted_str.end());
        anagram_map[sorted_str].push_back(str);
    }
    
    vector<vector<string>> result;
    for (const auto& anagram_group : anagram_map) {
        result.push_back(anagram_group.second);
    }
    
    return result;
    }
};