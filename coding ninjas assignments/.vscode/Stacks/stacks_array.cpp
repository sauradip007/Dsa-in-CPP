#include<iostream>
#include<climits>
using namespace std;
template<typename T>
class StackUsingArray{
    private:
    T *data;
    int nextIndex;
    int capacity;
    public:
    StackUsingArray()
    {
        data = new T[4];
        nextIndex = 0;
        capacity = 4;
    }
    //return the number of elements present in the stack
    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        // if(nextIndex == 0)
        // {
        //     return true;
        // }
        // else{
        //     return false;
        // }
        return nextIndex == 0; //short way of writing 
    }
    //insert element (push)
    void push(T element)
    { 
        if(nextIndex == capacity)
        {
            int  *neData = new T[2* capacity];
            for(int i = 0; i < capacity; i++)
            {
                neData[i] = data[i];
            }
            capacity*=2;
            delete[] data;
            data = neData;
            // cout<<"Stack full"<<endl;
            // return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    //delete element
    T pop(){
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
    T top(){
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return 0;
        }

        return data[nextIndex-1];
    }
};
int main()
{
 StackUsingArray<int>s;
 s.push(10);
 s.push(20);
 s.push(30);
 s.push(40);
 s.push(50);
 cout<<s.top()<<endl;
 cout<<s.pop()<<endl;
 cout<<s.pop()<<endl;
 cout<<s.pop()<<endl;
 cout<<s.size()<<endl;
 cout<<s.isEmpty()<<endl;
}