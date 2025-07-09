#include <iostream>
using namespace std;

class pqr; 
class xyz; 

class abc {
private:
    float data;
public:
    abc(float val) { data = val; }
    friend void max(abc, pqr, xyz); 
};

class pqr {
private:
    float data;
public:
    pqr(float val) { data = val; }
    friend void max(abc, pqr, xyz); 
};

class xyz {
private:
    float data;
public:
    xyz(float val) { data = val; }
    friend void max(abc, pqr, xyz); 
};

void max(abc obj1, pqr obj2, xyz obj3) {
    if (obj1.data > obj2.data && obj1.data > obj3.data) {
        cout << "Data member of abc is greater" << endl;
    } 
    else if (obj2.data > obj1.data && obj2.data > obj3.data) {
        cout << "Data member of pqr is greater" << endl;
    } 
    else {
        cout << "Data member of xyz is greater" << endl;
    }
}

int main() {
    
    abc obj1(10.25);
    pqr obj2(11.10);
    xyz obj3(12.25);
    max(obj1, obj2, obj3);

    abc obj4(20.25);
    pqr obj5(11.10);
    xyz obj6(12.25);
    max(obj4, obj5, obj6);

    return 0;
}