#include <iostream>
#include <ctime>
using namespace std;

	int main()
	{ 
	    const int n=1000000; 	//константа, задающая количество элементов массива
	    //int A[n]={87,45,30,85,61,40,45,39,84,45};  	//Массив из n элементов
        //int B[n]={87,45,30,85,61,40,45,39,84,45};  	//Массив из n элементов
	    int A[n];
        int B[n];
        int min=1000; 	//минимальное значение. Изначально инициализируется значением, превыщающим любое из возможных в массиве
	    int index_min; 	//индекс srand( time( 0 ) ля минимального элемента
        bool flag=true;
        int temp,i,j;
        int ca=0;
        int cb=0;
        time_t start, end;
        srand(time(0));
	   clock_t tStart;
   
            //Генерация элементов элементов массива
            
            for (int i = 0; i < n;i++){ 
                A[i]=10 + rand() % 90;		//Запрос элемента массива
                
            }
            
            //Генерация элементов элементов массива
            
            for (int i = 0; i < n;i++){ 
                B[i]=A[i];		//Запрос элемента массива
                
            }

            //Вывод массива
            /*
            for (int i = 0; i < n;i++){ 
                cout<<A[i]<<" ";
            }
            cout<<endl;
            */
            
            
            //Сортировка массива "сдвиг-вставка"
            //time (&start);
             tStart = clock();
            for (i = 0; i < n;i++){
                temp=A[i]; 
                for (j = i-1; j>=0 && A[j]>temp;j--)
                {
                    A[j+1]=A[j];
                    ca++;
                }
                A[j+1]=temp;
            }
            //time (&end);
           printf("Sort sdvig-vstavka Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

            //Сортировка массива "вставкой"
             tStart = clock();
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
             printf("Sort vstavka Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

            /*
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
        */
         /* Do your stuff here */
    
}