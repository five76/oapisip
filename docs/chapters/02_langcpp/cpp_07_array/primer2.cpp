#include <iostream>
using namespace std;

int main()
{ 
    const int n=5; //константа, задающая количество элементов массива
    int A[n];  //Массив из n элементов
    double SA; //Среднее арифметическое
    int SUM=0;   //Сумма элементов массива
    //Ввод элементов массива
    for (int i = 0; i < 5;i++){ 
        cout<<"A["<<i<<"]=";
        cin>>A[i];
        SUM=SUM+A[i];
    }
    SA=SUM/double(n);
    //Вывод элементов массива
    //for (int i=0 ;i<5;i++)
    //cout<<"A["<<i<<"]="<<A[i]<<endl;
    cout<<SUM<<endl;
    cout<<SA<<endl;
}