#include <iostream>
using namespace std;

//Прототип функции МАХ
int MAX(int, int);

//Основная функция
int main()
{
    int a,b,c,d;
    cout<<"Bведите a,b,c:";
    cin>>a>>b>>c;
    d=MAX(MAX(a,b),c);
    cout<<"\nmax (a, b, c) = "<<d ;
    return 0;
}

//Определение вспомогательной функции
int MAX(int x, int y)
{ 
    if (x>y) 
    {
        return x;
    }
else 
    {
        return y;
    }
}