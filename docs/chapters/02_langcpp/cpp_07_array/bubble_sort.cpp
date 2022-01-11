#include <iostream>
#include <ctime>
using namespace std;

	int main()
	{ 
	    const int n=10; 	//константа, задающая количество элементов массива
	    int A[n]={87,45,30,85,61,40,45,39,84,45};  	//Массив из n элементов
        int B[n]={87,45,30,85,61,40,45,39,84,45};  	//Массив из n элементов
	    int min=1000; 	//минимальное значение. Изначально инициализируется значением, превыщающим любое из возможных в массиве
	    int index_min; 	//индекс srand( time( 0 ) ля минимального элемента
        bool flag=true;
        int temp;
        int ca=0;
        int cb=0;
        srand(time(0));
	   
            //Генерация элементов элементов массива
            /*
            for (int i = 0; i < n;i++){ 
                A[i]=10 + rand() % 90;		//Запрос элемента массива
                
            }
            */
            //Вывод массива
            for (int i = 0; i < n;i++){ 
                cout<<A[i]<<" ";
            }
            cout<<endl;
            //Сортировка массива "пузырьком"
            for (int i = 0; i < n-1;i++){ 
                for (int j = 0; j < n-i-1;j++)
                {
                    if (A[j]>A[j+1])
                    {
                        temp=A[j];
                        A[j]=A[j+1];
                        A[j+1]=temp;
                        ca++;
                    }
                }
            }

            //Сортировка массива "вставкой"
            for (int i = 0; i < n-1;i++){ 
                index_min=i;
                for (int j = i+1; j < n;j++)
                {
                    if (B[j]<B[index_min])
                    {
                       index_min=j;     
                    }
                   
                }
                 if (index_min!=i){
                        temp=B[i];
                        B[i]=B[index_min];
                        B[index_min]=temp;
                        cb++;
                    
                }
            }


            cout<<"Sorted array"<<endl;
            //Вывод массива
            for (int i = 0; i < n;i++){ 
                cout<<A[i]<<" ";
            }
        cout<<endl; 
        cout<<"Count "<<ca<<endl;

         //Вывод массива
            for (int i = 0; i < n;i++){ 
                cout<<B[i]<<" ";
            }
        cout<<endl; 
        cout<<"Count "<<cb<<endl;
	}