struct Node {
    int key;
    int value;
    Node *next, *pre;
    Node(int key, int value) {
        this->key = key;
        this->value = value;
        next = pre = NULL;
    }
};

class LRUCache
{
private:
    static unordered_map<int, Node *> hsmap;
    static int capacity, count;
    static Node *head, *tail;

public:
    LRUCache(int cap)
    {
        unordered_map<int, Node *> temp;
        hsmap = temp;
        capacity = cap;
        head = new Node(0, 0);
        tail = new Node(0, 0);
        head->next = tail;
        head->pre = NULL;
        tail->next = NULL;
        tail->pre = head;
        count = 0;
    }

    static void addToHead(Node *node)
    {
        node->next = head->next;
        node->next->pre = node;
        node->pre = head;
        head->next = node;
    }

    static void deleteNode(Node *node)
    {
        node->pre->next = node->next;
        node->next->pre = node->pre;
    }
    
    static int get(int key)
    {
        if (hsmap.count(key) > 0)
        {
            Node *node = hsmap[key];
            int result = node->value;
            deleteNode(node);
            addToHead(node);
            return result;
        }
        return -1;
    }

    static void set(int key, int value)
    {
        if (hsmap.count(key) > 0)
        {
            Node *node = hsmap[key];
            node->value = value;
            deleteNode(node);
            addToHead(node);
        }
        else
        {
            Node *node = new Node(key, value);
            hsmap[key] = node;
            if (count < capacity) {
                count++;
                addToHead(node);
            } else {
                hsmap.erase(tail->pre->key);
                deleteNode(tail->pre);
                addToHead(node);
            }
        }
    }
};

// Initializing static members
unordered_map<int, Node *> temp;
int LRUCache::capacity = 0;
Node *LRUCache::head = new Node(0, 0);
Node *LRUCache::tail = new Node(0, 0);
int LRUCache::count = 0;
unordered_map<int, Node *> LRUCache::hsmap = temp;

 
 
int cashsize = 0;
map<int,int> mp;
deque<int> dq;
LRUCache::LRUCache(int N)
{
     cashsize = N;
     dq.clear();
     mp.clear();
}
/*Sets the key x with value y in the LRU cache */
void LRUCache::set(int x, int y) 
{
     if(mp.find(x)==mp.end())
     {
        mp[x]=y;
        if(dq.size()<cashsize)
            dq.push_back(x);
        else
        {
            int key = dq.front();
            dq.pop_front();
            mp.erase(key);
            dq.push_back(x);
        }
     }
     else
     {
         mp[x]=y;
         for(deque<int>::iterator it=dq.begin();it!=dq.end();it++)
         {
            if(*it == x)
            { dq.erase(it);
              break;
            }
         }
         dq.push_back(x);
     }
     return;
} 
int LRUCache::get(int x)
{
    if(mp.find(x)==mp.end())
        return -1;
    else
    {
        set(x,mp[x]);
        return mp[x];
    }
}







class LRUCache { 
    list<int> dq; 
    unordered_map<int, list<int>::iterator> ma; 
    int csize; // maximum capacity of cache 

public: 
    LRUCache(int); 
    void refer(int); 
    void display(); 
}; 
LRUCache::LRUCache(int n) { 
    csize = n; 
}  
void LRUCache::refer(int x) { 
    if (ma.find(x) == ma.end()) { 
        if (dq.size() == csize) { 
            int last = dq.back(); 
            dq.pop_back(); 
            ma.erase(last); 
        } 
    } 
    else
  begin      
        dq.erase(ma[x]); 
    dq.push_front(x); 
    ma[x] = dq.begin(); 
}  
void LRUCache::display() { 
    for (auto it = dq.begin(); it != dq.end(); 
        it++) 
        cout << (*it) << " "; 

    cout << endl; 
}