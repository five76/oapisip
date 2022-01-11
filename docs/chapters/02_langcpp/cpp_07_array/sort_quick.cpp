#include <iostream>
#include <ctime>
using namespace std;




int  qs(int *a,int l,int r)
{
    int temp,i;
    int pivot=a[r];
    int m=l;
    for (i=l;i<r;i++)
    {
        if (a[i]<=pivot)
        {
            temp=a[m];
            a[m]=a[i];
            a[i]=temp;
            m++;
        }
    }
    swap(a[r],a[m]);
    return m;
}

void QuickSortImpl(int *a, int l, int r) {
  if (l < r) {
    int q = qs(a, l, r);
    QuickSortImpl(a, l, q - 1);
    QuickSortImpl(a, q + 1, r);
  }
}
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

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
       int aa=1;
       int bb=2;
   
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
            //qs(A,0,n-1);
*/
             tStart = clock();            
            QuickSortImpl(A, 0, n-1);
             printf("Sort QuickSort Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);



        //Вывод массива
            /*
            for (int i = 0; i < n;i++){ 
                cout<<A[i]<<" ";
            }
            cout<<endl;
            */
            //swap(aa,bb);
            //cout<<aa<<" "<<bb<<endl;
            
            
            //Сортировка массива "сдвиг-вставка"
            //time (&start);
            /*
             tStart = clock();
            for (i = 0; i < n;i++){
                temp=B[i]; 
                for (j = i-1; j>=0 && B[j]>temp;j--)
                {
                    B[j+1]=B[j];
                   // ca++;
                }
                B[j+1]=temp;
            }
            //time (&end);
           printf("Sort sdvig-vstavka Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
*/
/*
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