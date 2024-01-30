#include <iostream>
#include <vector> // vector lib

using namespace std;
int main()
{

    // vector -- just like dynamic(size ko increase decrease kar sakta ha) array { dynamic array means array pura fill hona k baad same name se ak or array bana ga lakin is bar Double size ka pehla val ge or phela vala ki sarai value new double size vector ma paste ho jaya ge / or pehla vala delete ho jaya ga}

    // initilization of vector

    //  notaion<type>name;
    vector<int> v; // isma size pehla nhi bataya

    //               (size , sabi position pa 1 ajaya ga)
    vector<int> a(5, 1);
    cout << " 'a' vector all index 11111" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    //          s(size,kuch nhi litka to sabi intex pa 0000 store ho jaya ga by default)
    vector<int> s(5);

    //    copy all element of One vector to Another / copy one vector full inside another vector

    // example

cout<<"vector 'a' copyed in last_vector below: "<<endl;
    vector<int> last_vector(a); // pura 'a' vector last_vector ma copy ho jay aga {saraa elemenets}
    // proof
    cout << " 'last_vector' vector all index 11111" << endl;
    for (int i : last_vector)
    {
        cout << i << " ";
    }
    cout << endl;

    // size - currently kitna element ha
    cout << "size-> " << v.size() << endl;
    // capacity - total kitna elements k lea isko kitni memory alocate hai ha {kitna store kar saka}
    cout << "capacity-> " << v.capacity() << endl;
    // capacity double hoti raha ge jab jab vector bharata rahar ga

    // ya size / capacity alag alag chij ha

    v.push_back(1); // element andar danlne k lea {last ma 1 dal daga}
    cout << "capacity-> " << v.capacity() << endl;
    cout << "size-> " << v.size() << endl;

    v.push_back(2);
    cout << "capacity-> " << v.capacity() << endl;
    cout << "size-> " << v.size() << endl;

    v.push_back(3);
    cout << "capacity-> " << v.capacity() << endl;
    cout << "size-> " << v.size() << endl;

    cout << "Element at index 2: " << v.at(2) << endl;

    cout << "first element:-> " << v.front() << endl;
    cout << "last element of vector:-> " << v.back() << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back(); // last se ak element delete
    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "before clear size" << endl;
    cout << "capacity-> " << v.capacity() << endl;
    cout << "size-> " << v.size() << endl;
    v.clear(); // vector ka sara elememt delete kar de ga to SIZE to = 0 , lakin Capacity 0 nhi hogi wo clear hona se phela jitni thi utni he raha ge

    cout << "after clear size" << endl;
    cout << "capacity-> " << v.capacity() << endl;
    cout << "size-> " << v.size() << endl;

    return 0;
}