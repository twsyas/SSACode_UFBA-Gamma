// derived class
#include <iostream>
using namespace std;
class Polygon{
    protected:
        int width, height;
    public:
        void set_values(int a, int b)
            { width = a; height = b; }
};

class Retangle: public Polygon{
    public:
        int area()
            {return width*height;}
};

class Triangle: public Polygon{
    public:
        int area()
            {return width*height/2;}
};

int main(){
    Retangle rect;
    Triangle trgl;

    rect.set_values(4,5);
    trgl.set_values(4,5);
    cout << trgl.area() << '\n';
    cout << rect.area() << '\n';

    return 0;
}
