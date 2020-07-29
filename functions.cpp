#include <iostream>

using namespace std;

void sayHi(string name, int age){
    cout << "Hello, " << name << " you are " << age;
}


int main()
{
    cout << "Top \n";
    sayHi("Mike", 64);
    cout <<  "\n Bottom";
    sayHi("Aria", 45);
    return 0;
}

