 class SORTracker {
    set<pair<int,string>> rank; // <-score, name>
    set<pair<int,string>>::iterator it=rank.begin(); // not auto 
public:
    SORTracker() {    
    }
    void add(string name, int score) {
      auto it1=rank.insert({-score,name}).first; // insert() return {iterator,bool}
      if (*it1<*it)
        --it;
    }
    string get() {
      return (it++)->second;
    }
};

/**
 * Your SORTracker object will be instantiated and called as such:
 * SORTracker* obj = new SORTracker();
 * obj->add(name,score);
 * string param_2 = obj->get();
 */