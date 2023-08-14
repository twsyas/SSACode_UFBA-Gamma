// friend function
#include <iostream>
using namespace std;

class Retangle{
        int width, height;
    public:
        Retangle(){}
        Retangle(int x, int y) : width(x), height(y) {}
        int area() {return width*height;}
        friend Retangle duplicate(const Retangle&);
};
Retangle duplicate(const Retangle& param)
{
    Retangle res;
    res.width = param.width*2;
    res.height = param.height*2;
    return res;
}

int main(){
    Retangle foo;
    Retangle bar(2,3);
    foo = duplicate(bar);
    cout << foo.area() << '\n';
    return 0;
}