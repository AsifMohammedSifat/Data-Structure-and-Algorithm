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
     * Iterator: begin,end,rbegin,rend
     * Capacity: size,resize,capacity,max_size,empty
     * Modifiers: assign,push_back,pop_back,insert,erase,swap,clear
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
    for (int num : num) //for each loop
    {
        cout << num << " ";
    }

    for(int i=0;i<vec.size();i++){ //general loop
        cout<<vec[i]<<" "<<'\n';
    }

    return 0;
}
