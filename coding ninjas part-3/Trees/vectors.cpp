#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>*p = new vector<int>(); //dynamically
    vector<int>v;//static allocation
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v[1] = 100;

    //dont use this to insert elements
    // v[3] = 1002;
    // v[4] = 1234;

    // v.push_back(23);
    // v.push_back(234);
    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // cout<<v[2]<<endl;
    // cout << v[3] << endl;
    // cout << v[4] << endl;
    // cout << v[5] << endl;
    // cout << v[6] << endl;
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<v.at(2)<<endl;
    // cout<<v.at(6)<<endl;

    //to print
    // for(int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<endl;
    // }

    //to delete
    // v.pop_back();//deletes last element

    for(int i = 0; i < 100; i++)
    {
        cout<<"capacity: "<<v.capacity()<<endl;
        cout <<"size : "<< v.size() << endl;
        v.push_back(i+1);
      
    }
}