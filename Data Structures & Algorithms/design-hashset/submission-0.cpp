class MyHashSet {
public:
vector<int> h;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(count(h.begin(),h.end(),key)==0){
            h.push_back(key);
        }
    }
   void remove(int key) {
        auto it = find(h.begin(), h.end(), key);
        if (it != h.end()) {
            h.erase(it);
        }
    }

    
    
    bool contains(int key) {
       return count(h.begin(),h.end(),key)!=0;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */