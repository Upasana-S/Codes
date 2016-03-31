// Union
#include <iostream>

union a{int i; float f; 
}u={10};
int main()
{

 
std::cout<<"\n INT "<< u.i;
u.f=19.9;
std::cout<< "\n FLOAT: "<< u.f;
}
