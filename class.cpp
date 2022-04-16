
#include <iostream>

using namespace std;

namespace Anurag{
    class A{
        public:
            void get()
            {
                cout<<"Hello !";
            }
    };
}
    
int main()
{
    Anurag::A obj;
    obj.get();

    return 0;
}
