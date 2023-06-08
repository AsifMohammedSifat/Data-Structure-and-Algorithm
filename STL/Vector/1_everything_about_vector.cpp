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
     * Modifiers: assign,push_back,pop_back,insert,erase,clear
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

    //===========Modifiers: assign,push_back,pop_back,insert,erase,swap,clear===============//

    // assign()
    vector<int> numbers(5); 
    vector<int> number = {1,2,3,4,5};
    numbers = number;
    numbers.assign(number.begin(),number.end()); // it works like -> numbers = number
    numbers.assign(10, 42); // resize to 10 and assign 42  //42 42 42 42 42 42 42 42 42 42


    //insert()
    vector<int> num ={1,2,3,4,5};
    vector<int> example = {10,20,30};

    num.insert(num.begin()+2,50); // 1 2 50 3 4 5
    num.insert(num.begin()+2,3,50); //1 2 50 50 50 3 4 5
    num.insert(num.begin()+2,example.begin(),example.end()); // 1 2 10 20 30 3 4 5


    //erase()
    vector<int> num ={1,2,3,4,5};

    num.erase(num.begin()+2); // 1 2 4 5
    num.erase(num.begin()+1,num.begin()+4); // 1 5

    //clear()    
    vector<int> num ={1,2,3,4,5};
    num.clear(); // it set the size of vector 0.But,not permanently delete vector element

    //swap()
    vector<int> num ={1,2,3,4,5};
    vector<int> example = {10,20,30};

    num.swap(example); // num = {10,20,30} & example = {1,2,3,4,5};
    vector<int>().swap(num); // num vector is empty by anonymus vector funciton

    //push_back() and pop_back()
    vector<int> num ={1,2,3,4,5};
    num.push_back(6); //1,2,3,4,5,6
    num.pop_back(); //1,2,3,4,5
    num.front();//1
    num.back();//5







    return 0;
}
