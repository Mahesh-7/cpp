#include <iostream> 

using namespace std;
 
class Shape {
	
   protected:
      int width, height;
      
   public:
      Shape( int a = 0, int b = 0){
         width = a;
         height = b;
      }
      virtual int area() {    //without virtual keyword we cant use area function in another derived class and data wont update
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
class Rectangle: public Shape {
	
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { } //to access base class constructor ,have to derive function
      
      int area () { 
      
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};

// Main function for the program
int main() {
	
   Shape *shape;
   
   Rectangle rec(10,7);  //constructor call
   
   Triangle  tri(10,5);  //constructor call

   // store the address of Rectangle
   shape = &rec;  
   
   // call rectangle area.
   cout<<shape->area()<<endl;

   // store the address of Triangle
   shape = &tri;
   
   // call triangle area.
   cout<<shape->area()<<endl;
   
   return 0;
}
