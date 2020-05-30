#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
};
Node *append(int data,Node *headRef)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if(headRef==NULL)
    {
        headRef = newNode;
        return headRef;
    }
    Node *temp = headRef;
    while(temp->next)
        temp = temp->next;
    temp->next = newNode;
    return headRef;
}
bool checkPalindrome(Node *headRef)
{
    stack <int> s;
    Node *temp = headRef;
    while(temp)
    {
        s.push(temp->data);
        temp = temp->next;
    }
    temp = headRef;
    while(!s.empty())
    {
        if(temp->data != s.top())
            return false;
        s.pop();
        temp = temp->next;
    }
    return true;
}
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        Node *head = NULL;
        while(size--)
        {
            int new_data;   cin>>new_data;
            head = append(new_data,head);
        }
        cout<<checkPalindrome(head);
    }
}



// If We are Strict to Space then Second Aproch : [reverse LL From Middle]
// #include<bits/stdc++.h>
// using namespace std;
// struct Node {
//     int data;
//     Node *next;
// };
// Node *append(int data,Node *headRef)
// {
//     Node *newNode = new Node;
//     newNode->data = data;
//     newNode->next = NULL;
//     if(headRef==NULL)
//     {
//         headRef = newNode;
//         return headRef;
//     }
//     Node *temp = headRef;
//     while(temp->next)
//         temp = temp->next;
//     temp->next = newNode;
//     return headRef;
// }
// void printList(Node *headRef)
// {
//     Node *temp = headRef;
//     while (temp != NULL)
//     {
//         cout<<temp->data;
//         temp = temp->next;
//     }
// }

// Node *getMiddle(Node *headRef)
// {
//     Node *prev_slow = headRef;
//     Node *slow = headRef;
//     Node *fast = headRef;
//     while(fast && fast->next)
//     {
//         prev_slow = slow;
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     prev_slow->next = NULL;
//     return slow;
// }
// Node* reverseLL(Node *secondHead)
// {
//     Node *prev,*curr,*next;
//     prev = NULL;
//     curr = secondHead;

//     while(next)
//     {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     secondHead = prev;
//     return secondHead;
// }
// bool compareTwoLL(Node *first,Node *second)
// {
//     while(first)
//     {
//         if(first->data != second->data)
//             return false;
//         first = first->next;
//         second = second->next;
//     }
//     return true;
// }
// bool checkPalindrome(Node *headRef)
// {
//     Node *secondLL = getMiddle(headRef);
//     secondLL = reverseLL(secondLL);
//     return compareTwoLL(headRef,secondLL);
// }

// int main()
// {
//     int t;  cin>>t;
//     while(t--)
//     {
//         int size;   cin>>size;
//         Node *head = NULL;
//         while(size--)
//         {
//             int new_data;   cin>>new_data;
//             head = append(new_data,head);
//         }
//         cout<<checkPalindrome(head);
//     }
// }