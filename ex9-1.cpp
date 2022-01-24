#include <iostream>
using namespace std;

class sample {
    private :
        int a;
        int b;
    public :
        int c;
        void add(int x, int y) {
            a=x; b=y; c=a+b;
            cout<<"결과 : "<<c<<endl;;
        }
};

int main()
{
    sample test;
    test.add(10,20);
}