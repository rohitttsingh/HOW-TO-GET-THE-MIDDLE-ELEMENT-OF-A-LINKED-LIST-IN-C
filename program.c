//1. How will you find the middle element of a singly linked list without iterating the list more than once?
//To solve this problem, we can use the two-pointer method. You have two pointers, one fast and one slow, in the two-pointer approach. The fast pointer travels two nodes per step, while the slow pointer only moves one. The slow pointer will point to the middle node of the linked list when the fast pointer points to the last node, i.e. when the next node is null.

Node* getMiddle(Node *head)
{
     struct Node *slow = head;
     struct Node *fast = head;
 
     if (head)
     {
         while (fast != NULL && fast->next != NULL)
         {
             fast = fast->next->next;
             slow = slow->next;
         }
     }
     return slow;
}
