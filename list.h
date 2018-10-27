// list.h - linked list interfaces

struct Node {
    int val;
    Node* next;
};

// Linked list class
class List {
    Node* head;

public:
    // Constructors
    List(): head(nullptr) {}
    List(int val);
    List(int* values, int n);

    // Desctructor
    ~List();

    // public methods
    int length();
    bool add(Node* n, int val);
    void push_back(int val);
    bool remove(Node* n);
    Node* find(int val);
};