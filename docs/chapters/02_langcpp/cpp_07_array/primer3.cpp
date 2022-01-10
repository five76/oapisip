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

        srand(time(0));
	    while (flag){
            //Генерация элементов элементов массива
            for (int i = 0; i < n;i++){ 
                A[i]=10 + rand() % 91;		//Запрос элемента массива
                if (A[i]==100)
                    flag=false;
            }
            //Вывод массива
            for (int i = 0; i < n;i++){ 
                cout<<A[i]<<" ";
            }
            cout<<endl;
            //Поиск минимального элемента
            for (int i = 0; i < n;i++){ 
                if (A[i]<min)
                {
                    min=A[i];       //Переопределяем минимум
                    index_min=i;    //"Запоминаем" номер элемента
                }
            }
            cout<<"Минимальное значение A["<<index_min<<"]="<<min;
            cout<<endl;
        }
	}