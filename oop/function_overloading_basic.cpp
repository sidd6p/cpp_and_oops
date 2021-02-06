//https://techdifferences.com/difference-between-static-and-dynamic-binding.html
//https://www.geeksforgeeks.org/function-overloading-c/
//function overloading is a feature of c++ where two or more function can have same name but different parameters.
// functions can not be overloaded if they differ only in the return type, that will be the compile time error.
//FUNCTION OVERLOADING, it provides multiple definitions of the function by changing signature i.e changing number of parameters, change datatype of parameters, return type doesn’t play any role.
//FUNCTION OVERRIDDING, it is the redefinition of base class function in its derived class with same signature i.e return type and parameters. It can only be done in derived class.
#include<iostream>
class Test {
   static void fun(int i) {}//static function cannot be overloaded
   void fun(int i) {}
   int fun_1(int *ptr);
   int fun_1(int ptr[]); // redeclaration of fun_1(int *ptr), this is not function overloading. Parameter declarations that differ only in a pointer * versus an array [] are equivalent. That is, the array declaration is adjusted to become a pointer declaration.
   int f ( int x, int y) {}//Two parameter declarations that differ only in their default arguments are equivalent.
   int f ( int x, int y = 10) {}
};

int main()
{
   Test t;
   getchar();
   return 0;
}
