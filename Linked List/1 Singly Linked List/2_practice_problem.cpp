/*
||-----------------------||
||  All Praise to Allah  ||
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

/*====================| Calculate Size of list |=========================*/

int getSize(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

/*====================| Insert operation  |=========================*/

// insert at tail build linked list
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Insert at head
void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    head = newNode;
    newNode->next = temp;
}

// insert at any position
void insertAtAnyPosition(Node *&head, int index, int val)
{
    Node *newNode = new Node(val);
    if (index == 1)
    {
        insertAtHead(head, val);
        return;
    }
    else if (index == getSize(head))
    {
        insertAtTail(head, val);
        return;
    }

    Node *temp = head;

    int pos = 1;

    while (pos != index - 1)
    {
        temp = temp->next;
        pos++;
    }

    Node *temp2 = temp->next;
    temp->next = newNode;
    newNode->next = temp2;
}

/*====================| Delete operation  |=========================*/

// delete at head
void deleteFromHead(Node *&head)
{
    Node *temp = head;

    Node *temp2 = temp->next;
    head = temp2;
    delete temp;
}

// delete from tail
void deleteFromTail(Node *&head)
{
    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *temp2 = temp->next;
    temp->next = NULL;

    delete temp2;
}

/*====================| Print List |=========================*/
void printList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

/*====================| Recursion |=========================*/
void print_recusively(Node *tmp)
{
    if (tmp == NULL)
        return;
    print_recusively(tmp->next);
    cout << tmp->val << " ";
}

int main()
{
    /**
     * Question: Take a singly linked list as input and print the size of the linked list.
     * Sample Input:
     * 2 1 5 3 4 8 9 -1
     * Sample Output:
     * 7
     *
     * Sample Input:
     * 5 1 4 5 -1
     * Sample Output:
     * 4
     *
     */
    Node *head = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head, val);
    }
    cout << getSize(head);
    /**
     * Question: Take a singly linked list as input and check if the linked list contains any   duplicate value. You can assume that the maximum value will be 100.
     *
     * Sample Input:
     * 5 4 8 6 2 1 -1
     * Sample Output:
     * NO
     *
     * Sample Input:
     * 2 4 5 6 7 4 -1
     * Sample Output:
     * YES
     *
     */

    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head, val);
    }

    Node *temp = head;
    int flag = 0;

    for (Node *i = temp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val == j->val)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
    /*
  Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.

  Sample Input:                           Sample Output:
  2 4 6 8 10 -1                                6

   Sample Input:                           Sample Output:
  1 2 3 4 5 6 -1                              3 4

  */

    Node *head = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head, val);
    }

    int sz = getSize(head);
    Node *temp = head;

    if (sz % 2 == 0)
    {
        int count = 1;
        while (temp != NULL)
        {
            if (count == sz / 2 || count == (sz) / 2 + 1)
            {
                cout << temp->val << " ";
            }
            temp = temp->next;
            count++;
        }
    }
    else
    {
        int count = 1;
        while (temp != NULL)
        {
            if (count == sz / 2 + 1)
            {
                cout << temp->val << " ";
            }
            temp = temp->next;
            count++;
        }
    }

    /*
   Question: Take a singly linked list as input and check if the linked list is sorted in ascending order.

   Sample Input:                           Sample Output:
   1 5 6 8 9 -1                               YES

   Sample Input:                           Sample Output:
   2 4 6 5 8 4 -1                             NO

   */

    Node *head = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head, val);
    }
    Node *temp = head;

    for (Node *i = temp->next; i != NULL; i = i->next, temp = temp->next)
    {
        if (i->val < temp->val)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    /*
    Question: Take a singly linked list as input, then print the maximum value of them.

    Sample Input:                           Sample Output:
    2 4 1 3 5 4 2 5 -1                            5

    Sample Input:                           Sample Output:
    2 4 1 3 5 8 2 5 -1                             8

    */

    Node *head = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head, val);
    }
    Node *temp = head;
    int max = INT_MIN;

    for (Node *i = temp; i != NULL; i = i->next)
    {
        if (i->val > max)
        {
            max = i->val;
        }
    }
    cout << max << endl;
}
