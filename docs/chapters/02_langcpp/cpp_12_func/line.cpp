#include <iostream>
using namespace std;

//Прототип функции line
void line(void);

//Основная функция
int main()
{ 
    line (); //Вызов функции line
    return 0;
}
//Определение функции line
void line(void)
{ 
    int i;
    for(i=0; i<80; i++) cout<<"*";
}