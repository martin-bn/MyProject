#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    bool isMale = false;
    bool isTall = true;
    
    if(isMale && isTall){
        cout << "You are a tall male";
    }   else if(isMale && !isTall){
        cout << "You are a short male";
    }    else if(!isMale && isTall){
        cout << "You are tall but you are not male";     
    }   else {
        cout << "You are not tall or male";
    }


    return 0;
}

