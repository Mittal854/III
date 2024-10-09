#include <iostream>
using namespace std;

class Cuboid {
private:
    int length;
    int breadth;
    int height;
public:
    Cuboid(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }
    ~Cuboid() {}
    void surfaceArea();
    void volume();
    void display();
};

void Cuboid::volume() {
    cout<< "Volume: "<< length*breadth*height<< endl;
}

void Cuboid::surfaceArea() {
    cout<< "Surface Area: "<< 2*(length*breadth + breadth*height + height*length)<< endl;
}

void Cuboid::display() {
    cout<< "Length: "<< length<< endl;
    cout<< "Breadth: "<< breadth<< endl;
    cout<< "Height: "<< height<< endl;
}

int main() {
    int l, b, h;
    cin>> l>> b>>h;
    Cuboid c(l,b ,h);
    c.display();
    c.surfaceArea();
    c.volume();

    return 0;
}