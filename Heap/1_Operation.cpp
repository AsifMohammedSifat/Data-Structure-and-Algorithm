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

class MaxHeap
{
public:
    vector<int> v;
    MaxHeap()
    {
    }

    void up_heapify(int idx)
    {
        while (0 < idx && v[idx] > v[(idx - 1) / 2])
        {
            swap(v[(idx - 1) / 2], v[idx]);
            idx = (idx - 1) / 2;
        }
    }
    void down_heapify(int idx)
    {
        while (true)
        {
            int largest = idx;
            int l = 2 * idx + 1;
            int r = 2 * idx + 2;

            if (l < v.size() && v[largest] < v[l])
            {
                largest = l;
            }
            if (r < v.size() && v[largest] < v[r])
            {
                largest = r;
            }
            if (largest == idx)
            {
                break;
            }
            swap(v[idx], v[largest]);
            idx = largest;
        }
    }

    void push(int val)
    {
        v.push_back(val);
        up_heapify(v.size() - 1);
    }

    void pop()
    {
        swap(v[0], v[v.size() - 1]);
        v.pop_back();
        down_heapify(0);
    }

    void printHeap()
    {
        for (int val : v)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    int top()
    {
        return v[0];
    }

    void buildHeapFromArray(vector<int> arr)
    {
        v.clear();
        v = arr;
        int n = arr.size();
        int lastNonLeafNode = n / 2 - 1;

        for (int i = lastNonLeafNode; i >= 0; i--)
        {
            down_heapify(i);
        }
    }
};

int main()
{
    MaxHeap mx;
    mx.push(1);
    mx.push(2);
    mx.push(3);
    mx.push(4);
    mx.push(5);

    mx.printHeap();

    mx.pop();
    mx.printHeap();

    cout << mx.top() << endl;

    vector<int> arr = {1, 2, 3, 4, 5};
    mx.buildHeapFromArray(arr);
    mx.printHeap();

    return 0;
}
