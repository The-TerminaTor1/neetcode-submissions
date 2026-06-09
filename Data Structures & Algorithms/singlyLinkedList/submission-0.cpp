class LinkedList {
public:

struct s
{
    int val;
    s* next;
    s(int v) : val(v) , next(nullptr) {}

    
};
    s* head;
    s* tail;
    int length;

    LinkedList() {
        head = nullptr;
        tail = nullptr;
        length = 0;
        

    }

    int get(int index) {
        if (index < 0 || index >= length) return -1;
        s* current = head;
        for (int i = 0; i < index; ++i) {
            current = current->next;
        }
        return current->val;


    }

    void insertHead(int val) {
         s* newNode = new s(val);
        newNode->next = head;
        head = newNode;
        if (length == 0) tail = newNode;
        length++;
        
    }
    
    void insertTail(int val) {
        s* newNode = new s(val);
        if (length == 0) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        length++;

    }

    bool remove(int index) {
         if (index < 0 || index >= length) return false;

        if (index == 0) {
            s* temp = head;
            head = head->next;
            delete temp;
            length--;
            if (length == 0) tail = nullptr;
            return true;
        }
        s* prev = head;
        for (int i = 0; i < index - 1; ++i) {
            prev = prev->next;}

             s* target = prev->next;
        prev->next = target->next;
        if (target == tail) tail = prev;
        delete target;
        length--;
        return true;
    }

    vector<int> getValues() {
        
         vector<int> result;
        s* current = head;
        while (current) {
            result.push_back(current->val);
            current = current->next;
        }
        return result;
    }
};
