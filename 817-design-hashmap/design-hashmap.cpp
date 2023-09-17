class MyHashMap {
private:
    vector<int> hashmap;

public:
    MyHashMap() {
        hashmap.assign(1000001, -1); // Initialize with -1 to indicate empty slots
    }

    void put(int key, int value) {
        if (key >= 0 && key <= 1000000) {
            hashmap[key] = value; // Store the value at the specified key
        }
    }

    int get(int key) {
        if (key >= 0 && key <= 1000000) {
            return hashmap[key]; // Retrieve the value at the specified key
        } else {
            return -1; // Key is out of range
        }
    }

    void remove(int key) {
        if (key >= 0 && key <= 1000000) {
            hashmap[key] = -1; // Mark the slot as empty (-1 indicates no value)
        }
    }
};


/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */