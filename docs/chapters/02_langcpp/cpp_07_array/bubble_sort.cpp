#include <iostream>
#include <ctime>
using namespace std;

	int main()
	{ 
	    const int n=10; 	//константа, задающая количество элементов массива
	    int A[n];  	//Массив из n элементов
	    int min=1000; 	//минимальное значение. Изначально инициализируется значением, превыщающим любое из возможных в массиве
	    int index_min; 	//индекс srand( time( 0 ) ля минимального элемента
        bool flag=true;
        int temp;
        srand(time(0));
	   
            //Генерация элементов элементов массива
            for (int i = 0; i < n;i++){ 
                A[i]=10 + rand() % 90;		//Запрос элемента массива
                
            }
            //Вывод массива
            for (int i = 0; i < n;i++){ 
                cout<<A[i]<<" ";
            }
            cout<<endl;
            //Сортировка массива
            for (int i = 0; i < n-1;i++){ 
                for (int j = 0; j < n-i-1;j++)
                {
                    if (A[j]>A[j+1])
                    {
                        temp=A[j];
                        A[j]=A[j+1];
                        A[j+1]=temp;
                    }
                }
            }
            cout<<"Sorted array"<<endl;
            //Вывод массива
            for (int i = 0; i < n;i++){ 
                cout<<A[i]<<" ";
            }
        cout<<endl;  
	}