#include <iostream>

class DoublyLinkedList {
public:
    struct Node {
        int data;
        Node* prev;
        Node* next;
    };

    Node* head;
    Node* tail;

    // constructor
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void append(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->prev = tail;
        newNode->next = nullptr;
        if (tail) {
            tail->next = newNode;
        }
        tail = newNode;
        if (!head) {
            head = newNode;
        }
    }

    void swap(int i, int j) {
        if (i == j) {
            return;
        }
        Node* current = head;
        int count = 0;
        Node* node1 = nullptr;
        Node* node2 = nullptr;
        while (current) {
            if (count == i) {
                node1 = current;
            } else if (count == j) {
                node2 = current;
            }
            current = current->next;
            count++;
        }
        if (!node1 || !node2) {
            std::cout << "Invalid indices" << std::endl;
            return;
        }
        int temp = node1->data;
        node1->data = node2->data;
        node2->data = temp;
    }

    void print() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList list;
    list.append(3);
    list.append(2);
    list.append(6);
    list.append(4);
    list.append(7);
    std::cout << "Original List : ";
    list.print();

    list.swap(1, 4);

    std::cout << "List after swapping elements at index 1 and 4 : ";
    list.print();
    return 0;
}
