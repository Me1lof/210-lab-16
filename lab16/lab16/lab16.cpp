// Course: COMSC-210-5481
// Assignment: Color Class w/ Condtructors
// Name: Melissa Ochoa Flores

#include <iostream>

class Color {
private:
    int red;
    int green;
    int blue;

public:
    
    Color(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}

    
    int getRed() const {
        return red;
    }

    int getGreen() const {
        return green;
    }

    int getBlue() const {
        return blue;
    }

    void print() const {
        std::cout << "Color(Red: " << red << ", Green: " << green << ", Blue: " << blue << ")" << std::endl;
    }
};

int main() {

    Color color1;
    color1.print();  

    
    Color color2(0, 255, 0); 
    color2.print();         

    Color color3(0, 0, 255); 
    color3.print();          

    
    Color color4(255, 0);   
    color4.print();          

    return 0;
}
