#include<iostream>
using namespace std;

class temp{
    public:
        template <class Tem>
        
        char pro(Tem val)
        {
            cout<<"Result : "<<val<<endl;
        }
};
int main()
{
    temp a;
    a.pro("DEE");   //for string type
    a.pro('D');     // for character type
    a.pro(23);      // for integer type
    a.pro(6.5);    // for float type
}
