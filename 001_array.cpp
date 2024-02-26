#include <iostream>

int fun(int n){
    if(n == 0)
    {
        return n;
    }
    fun(n-1);
    n=n*n-1;
}

int main()
{
    std::cout<<"Hello World";
    int x =3;
    int fact = 0;
    fact = fun(x);
    std::cout<<fact;
    

    return 0;
}
