#include <iostream> 
using namespace std;
 
class Shape {               //base class
   protected:
      int width, height;
      
   public:
      Shape( int a = 0, int b = 0){       //constructor
         width = a;
         height = b;
      }
      virtual int area() {                                         ////polymorphism for over ride 
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
class Rectangle: public Shape {           //derive class 1
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};

class Triangle: public Shape {      //derive class 2
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};

// Main function for the program
int main() {
	//Shape shape(1,2);
	
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);

   // store the address of Rectangle
   shape = &rec;
   
   // call rectangle area.
   shape->area();

   // store the address of Triangle
   shape = &tri;
   
   // call triangle area.
   shape->area();
   
   return 0;
}
