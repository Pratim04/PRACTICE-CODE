// Copy constructor
#include<iostream>
using namespace std;
class demo
{
    int a;
public:
    demo()
    {
        a = 10;
    }

    demo(demo &z) 
    {
        a = z.a;
    }
    void putdata()
    {
        cout<<"\nA = "<<a;
    } 
};

int main()
{
    demo aa;
    demo bb(aa);
    demo cc = bb;

    aa.putdata();
    bb.putdata();
    cc.putdata();

    return 0;
}

/*In 13th line It's an object with the same name of 
class or the default contructor but the '&' is use for not to 
make new objects every time '&' is just store the 
address of the object */

/*It's mandatory to have a default contructor to make a cpoy constructor*/