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
/*
    1)Basic Operation: declearation,initialization,print

    2)Iterator:
    3)Algorithm:
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declearation

    map<int, string> mp; // map<key,value> map_name;

    // initialization
    mp[1] = "one";
    mp[2] = "two";
    mp[3] = "three";

    // print map value;

    // type - 1
    cout<<"for Loop\n";
    map<int, string>::iterator it;

    for (it = mp.begin(); it != mp.end(); it++)
    { // using for loop
        cout << (*it).first << " " << (*it).second << endl;
        // cout<<it->first<<" "<<it->second; // alternative
    }

    // type-2
    it = mp.begin();
    cout<<"while Loop\n";
    while (it != mp.end())
    { // using while loop
        cout << it->first << " " << it->second << endl;
        it++;
    }

    // type-3
    cout<<"for each Loop\n";
    for (auto it : mp)
    { // using for each loop
        cout << it.first << " " << it.second << endl;
    }

    // type-4    
    cout<<"for each Loop - shortcut\n";
    for (auto [f,s] : mp)
    { // using for each loop
        cout << f << " " << s << endl;
    }

    return 0;
}
