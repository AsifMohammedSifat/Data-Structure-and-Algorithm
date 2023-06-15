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
     * Others: replace(), reverse(), find(), unique(),  
     *
     */

    //========================================================How to declear & initialize vector===========================================================================//

    vector<int> vec;                   // vector<data_type> vector_name; // Empty vector of integers
    vector<int> vec1(5, 0);            // vector<data_type> vector_name(size,value) // 0 0 0 0 0
    vector<int> num = {1, 2, 3, 4, 5}; // Vector of integers initialized with values

    //====================================================================How to take Input===================================================================================//

    vec.push_back(1);

    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        vec.push_back(n);
    }

    //===================================================================How to show output===================================================================================//
    for (int num : num) // for each loop
    {
        cout << num << " ";
    }

    for (int i = 0; i < vec.size(); i++)
    { // general loop
        cout << vec[i] << " " << '\n';
    }

    //====================================================Capacity: size,resize,capacity,max_size,empty===========================================================================//

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

    //=========================================Modifiers: assign,push_back,pop_back,insert,erase,swap,clear===========================================================================//

    // assign()
    vector<int> numbers(5);
    vector<int> number = {1, 2, 3, 4, 5};
    numbers = number;
    numbers.assign(number.begin(), number.end()); // it works like -> numbers = number
    numbers.assign(10, 42);                       // resize to 10 and assign 42  //42 42 42 42 42 42 42 42 42 42

    // insert()
    vector<int> num = {1, 2, 3, 4, 5};
    vector<int> example = {10, 20, 30};

    num.insert(num.begin() + 2, 50);                             // 1 2 50 3 4 5
    num.insert(num.begin() + 2, 3, 50);                          // 1 2 50 50 50 3 4 5
    num.insert(num.begin() + 2, example.begin(), example.end()); // 1 2 10 20 30 3 4 5

    // erase()
    vector<int> num = {1, 2, 3, 4, 5};

    num.erase(num.begin() + 2);                  // 1 2 4 5
    num.erase(num.begin() + 1, num.begin() + 4); // 1 5

    // clear()
    vector<int> num = {1, 2, 3, 4, 5};
    num.clear(); // it set the size of vector 0.But,not permanently delete vector element

    // swap()
    vector<int> num = {1, 2, 3, 4, 5};
    vector<int> example = {10, 20, 30};

    num.swap(example);       // num = {10,20,30} & example = {1,2,3,4,5};
    vector<int>().swap(num); // num vector is empty by anonymus vector funciton

    // push_back() and pop_back()
    vector<int> num = {1, 2, 3, 4, 5};
    num.push_back(6); // 1,2,3,4,5,6
    num.pop_back();   // 1,2,3,4,5
    num.front();      // 1
    num.back();       // 5

    //========================================================================Iterator: begin,end,rbegin,rend=====================================================================//

    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it;
    vector<int>::reverse_iterator it1;    
   

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    //reverse_iterator print elements in reverse
    for (vector<int>::reverse_iterator it1 = v.rbegin(); it1 < v.rend(); it1++)
    {
        cout << *it1 << " ";
    }


    //=========================================================================Others: replace(), reverse(),sort(), find()=============================================================//

    //reverse(), sort(),
    vector<int> num = {1,2,3,4,5};
    reverse(num.begin(),num.end()); // 5 4 3 2 1
    sort(num.begin(),num.end());//1 2 3 4 5
    sort(num.begin(),num.end(),greater<int>());//5 4 3 2 1 

    //find()
    vector<int>v={1,2,2,4,3,5,1,2,4,5,3,2};
    auto it = find(v.begin(),v.end(),100);
    if(it == v.end()) cout<<"Not found";
    else cout<<"Found"<<endl;

    //replace()
    vector<int>v={1,2,3,2,5};
    replace(v.begin(),v.end(),2,100); //1 100 3 100 5
    for(int x:v)
    {
        cout<<x<<" ";
    }
/*============================================|Unique() with 3 types|=====================================================================*/
    /*Type-1*/
    vector<int> vec = {1,2,3,4,5,1,2,3,4,5};

    sort(vec.begin(),vec.end());

    int sz = unique(vec.begin(),vec.end())-vec.begin();  // calculate the size of unique element
    //uses of sz
    for(int i = 0;i<sz;i++){
        cout<<vec[i]<<" "; 
    }
    cout<<endl;

    /*Type-2*/
    //uses of sz1
    vector<int> vec = {1,2,3,4,5,1,2,3,4,5};
    sort(vec.begin(),vec.end());// 1 1 2 2 3 3 4 4 5 5

    auto sz1 = unique(vec.begin(),vec.end());  // pass last address of unique value  
    /**
     * 1 2 3 4 5 1 2 3 4 5
     *             |
     *            end()
     *      Which received sz1
     * 
    */
    for(auto i = vec.begin();i!=sz1;i++){
        cout<<*i<<" ";
    }


    /*Type-3*/
     std::vector<int> numbers = {1, 2, 2, 3, 3, 3, 4, 4, 5};

    // Removing consecutive duplicates
    auto newEnd = std::unique(numbers.begin(), numbers.end());

    // Erasing the elements after newEnd
    numbers.erase(newEnd, numbers.end());

    // Output the unique elements
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    
/*============================================|max_element() and min_element()|=====================================================================*/
        /*
        max_element() and min_element()
        1) find the max and min value;
        2) find the index of max and min value
    */
    vector<int> vec = {1, 2, 2, 3, 4, 5, 7, 8, 9, 5, 7};

    // 1) find value
    vector<int>::iterator it = max_element(vec.begin(), vec.end());
    // it will pass the address of max element
    cout << *it << endl;

    vector<int>::iterator it1 = max_element(vec.begin() + 1, vec.begin() + 4);
    // it will find the max elemetn from 1 to before 4 index
    cout << *it1 << endl;

    // 1) find index
    int indx = max_element(vec.begin(), vec.end())-vec.begin();
    // it will pass the index of max element
    cout << indx << endl;







    return 0;
}
