// design the class:

class LRUCache
{
    private:
        int capacity;
        list <pair<int,int>> l;
        unordered_map <int , list<pair<int,int>>::iterator > m;
    public:
        LRUCache(int cap)
        {
            capacity=cap;
        }
        
        int get(int key)
        {
            if(m.find(key)==m.end())
                return -1;
            set(key,m[key]->second);
            return m[key]->second;
        }
        
        void set(int key, int value)
        {
            if(m.find(key)!=m.end())
            {
                l.erase(m[key]);
            }
            else
            {
                if(capacity==l.size())
                {
                    m.erase(l.back().first);
                    l.pop_back();
                }
            }
            l.push_front({key,value});
            m[key]=l.begin();
        }
};