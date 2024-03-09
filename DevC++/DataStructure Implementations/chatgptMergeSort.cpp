#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to display a linked list
void displayList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Function to merge two sorted linked lists
Node* mergeSortedLists(Node* list1, Node* list2) {
    Node* mergedList = nullptr;
    Node* current = nullptr;

    while (list1 != nullptr && list2 != nullptr) {
        if (list1->data < list2->data) {
            if (mergedList == nullptr) {
                mergedList = new Node(list1->data);
                current = mergedList;
            } else {
                current->next = new Node(list1->data);
                current = current->next;
            }
            list1 = list1->next;
        } else {
            if (mergedList == nullptr) {
                mergedList = new Node(list2->data);
                current = mergedList;
            } else {
                current->next = new Node(list2->data);
                current = current->next;
            }
            list2 = list2->next;
        }
    }

    // If any list has remaining elements
    while (list1 != nullptr) {
        current->next = new Node(list1->data);
        current = current->next;
        list1 = list1->next;
    }

    while (list2 != nullptr) {
        current->next = new Node(list2->data);
        current = current->next;
        list2 = list2->next;
    }

    return mergedList;
}

// Function to free memory allocated for a linked list
void deleteList(Node* head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Example usage
    Node* list1 = new Node(1);
    list1->next = new Node(3);
    list1->next->next = new Node(5);

    Node* list2 = new Node(2);
    list2->next = new Node(4);
    list2->next->next = new Node(6);

    std::cout << "List 1: ";
    displayList(list1);

    std::cout << "List 2: ";
    displayList(list2);

    Node* mergedList = mergeSortedLists(list1, list2);

    std::cout << "Merged List: ";
    displayList(mergedList);

    // Free memory
    deleteList(list1);
    deleteList(list2);
    deleteList(mergedList);

    return 0;
}
//=========================================================================
// Function to remove duplicates from a doubly linked list
void removeDupes(doubleNode* &head) {
    doubleNode* current = head;

    while (current != nullptr) {
        doubleNode* tempNode = current->next;

        while (tempNode != nullptr) {
            if (current->data == tempNode->data) {
                // Duplicate found, remove tempNode
                if (tempNode->next != nullptr) {
                    tempNode->next->prev = tempNode->prev;
                }
                if (tempNode->prev != nullptr) {
                    tempNode->prev->next = tempNode->next;
                } else {
                    // Update head if tempNode is the first node
                    head = tempNode->next;
                }
                
                delete tempNode;
            }

            tempNode = tempNode->next;
        }

        current = current->next;
    }
}

//=======================================================================================================
// Function to reverse a singly linked list
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* nextNode;

    while (current != nullptr) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    return prev;
}

// Function to check if a singly linked list is a palindrome
bool isPalindrome(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        // An empty list or a list with a single element is always a palindrome
        return true;
    }

    Node* slow = head;
    Node* fast = head;

    // Find the middle of the linked list
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the linked list
    Node* reversedSecondHalf = reverseList(slow);

    // Compare the first half with the reversed second half
    while (reversedSecondHalf != nullptr) {
        if (head->data != reversedSecondHalf->data) {
            // Restore the original linked list before returning
            reverseList(slow);
            return false;
        }
        head = head->next;
        reversedSecondHalf = reversedSecondHalf->next;
    }

    // Restore the original linked list
    reverseList(slow);

    return true;
}

