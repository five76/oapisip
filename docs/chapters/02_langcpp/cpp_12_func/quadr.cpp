//Площадь выпуклого четырехугольника
#include <iostream>
#include <math.h>
using namespace std;

typedef double D; //Переименование типа double

D Line(D,D,D,D); //Прототип функции Line
D Geron(D,D,D,D,D,D); // Прототип функции Geron

//Основная функция
int main()
{ 
    D x1,y1,x2,y2,x3,y3,x4,y4,S1234;
    cout<<"x1="; cin>>x1; 
    cout<<"y1="; cin>>y1;
    cout<<"x2="; cin>>x2;
    cout<<"y2="; cin>>y2;
    cout<<"x3="; cin>>x3;
    cout<<"y3="; cin>>y3;
    cout<<"x4 = "; cin>>x4;
    cout<<"y4 = "; cin>>y4;
    S1234=Geron(x1,y1,x2,y2,x3,y3)+Geron(x1,y1,x3,y3,x4,y4);
    cout<<"Плoщaдь четырехугольника="<<S1234;
    return 0;
}

//Определение функции Line
D Line(D a,D b,D c,D d)
{
    return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}

//Определение функции Geron
D Geron(D a1,D a2,D b1,D b2,D c1,D c2)
{
    D p,ab,bc,ca;
    ab=Line(a1,a2,b1,b2); 
    bc=Line(b1,b2,c1,c2);
    ca=Line(c1,c2,a1,a2);
    p=(ab+bc+ca)/2;
    return sqrt(p*(p-ab)*(p-bc)*(p-ca));
}