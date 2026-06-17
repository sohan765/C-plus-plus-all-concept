#include <iostream>
using namespace std;

class node;
class list; // forward declaration

class iteration {
    node *currNode;  // renamed
    list *currList;  // renamed
public:
    iteration() : currNode(0), currList(0) {}
    void begin(list *); // init
    bool end();         // check end
    void next();        // go to next
    int data() const;   // get node data  
};

class list {
    node *head, *tail;
public:
    list(node *h=0): head(h), tail(h) {}
    void append(node *p);
    friend class iteration;
};

class node {
    int info;
    node *next;
public:
    node(int i) : info(i), next(0) {}
    friend class list;
    friend class iteration;
};

// iteration methods
void iteration::begin(list *l) {
    currList = l;
    currNode = l->head;
}
bool iteration::end() {
    return currNode == 0;
}
void iteration::next() {
    currNode = currNode->next;
}
int iteration::data() const {
    return currNode->info;
}

void list::append(node *p) {
    if (!head) head = tail = p;
    else {
        tail->next = p;
        tail = tail->next;
    }
}

int main() {
    list l;
    node n1(1), n2(2), n3(3);
    l.append(&n1);
    l.append(&n2);
    l.append(&n3);

    iteration it;
    for (it.begin(&l); !it.end(); it.next()) {
        cout << it.data() << " ";  // now prints correctly
    }
    cout << endl;
    return 0;
}
