/*
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{

    /**Summary:
     *
     * Declear and initialize
     * Input
     * Output
     *
     * Capacity: size,resize,capacity,max_size,empty
     * Modifiers: assign,push_back,pop_back,insert,erase,swap,clear
     * Iterator: begin,end,rbegin,rend
     *
     */

    //===========How to declear & initialize vector===============//

    vector<int> vec;                   // vector<data_type> vector_name; // Empty vector of integers
    vector<int> vec1(5, 0);            // vector<data_type> vector_name(size,value) // 0 0 0 0 0
    vector<int> num = {1, 2, 3, 4, 5}; // Vector of integers initialized with values

    //===========How to take Input===============//

    vec.push_back(1);

    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        vec.push_back(n);
    }

    //===========How to show output ===============//
    for (int num : num) // for each loop
    {
        cout << num << " ";
    }

    for (int i = 0; i < vec.size(); i++)
    { // general loop
        cout << vec[i] << " " << '\n';
    }

    //===========Capacity: size,resize,capacity,max_size,empty===============//

    // size() -> it return the size of a vector
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Size of the vector: " << numbers.size() << endl;

    // resize() -> it return the resize the vector.
    /**
     * If vector size is small,resize increase size and set 0 values to extra index
     * If vector size is large,resize decrease size and delete array element
     */
    vector<int> numbers = {1, 2, 3, 4, 5};

    numbers.resize(8);

    cout << "Size after resizing: " << numbers.size() << endl;
    cout << "New elements after resizing: " << endl;
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // capacity -> It shows capacity of vecotr
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "Capacity of the vector: " << numbers.capacity() << endl;

    // max_size() -> this function returns the maximum possible size that the vector can reach;
    cout << "Capacity of the vector: " << numbers.capacity() << endl;

    // empty() -> this return bool value.If vector is empty return true;else return false;

    vector<int> numbers;

    if (numbers.empty())
    {
        cout << "Vector is empty" << endl;
    }
    else
    {
        cout << "Vector is not empty" << endl;
    }
    return 0;
}
