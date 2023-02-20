class Node {
public:
    float number;
    char character;
    Node* next;
    Node* next_to_next;

    Node(float n, char c) {
        number = n;
        character = c;
        next = nullptr;
        next_to_next = nullptr;
    }
};
