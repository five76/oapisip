Листинги
~~~~~~~~~~

.. _ex0501:

Листинг ex_05_01.cpp
=====================

.. code-block:: cpp

        #include<iostream>
        using namespace std;

        //функция подсчета суммарного расстояния
        float sum_dist(int n, float beg_s)
        {
          float S=beg_s; //S -суммарный путь. Инициализируется значением beg_s
          float s=beg_s; //s - расстояние в i-ый день.  Инициализируется значением beg_s
          for (int i=2; i<=n; i++) //i- счетчик дней, начинается суммирование со второго дня
          {
            s = s*1.1;              //вычисление пути в текущий день
            S = S + s;              //преодоленное расстояние добавляется к общей сумме
          }
          return S;                 //возврат найденной суммы в точку вызова
        }
        
        //основная программа
        int main()
        {
          int n; //количество дней тренировок
          float s1; //расстояние в 1  первый день тренировок
          cout<<"За какое количество дней необходимо определить суммарное расстояние"<<endl;
          cin>>n;
          cout<<"Сколько пробежал спортсмен в 1 день"<<endl;
          cin>>s1;
          cout<<"Суммарное расстояние за "<<n<<" дней = "<<sum_dist(n,s1)<<" км."<<endl;
          return 0;
        }
        


.. _ex0502:

Листинг ex_05_02.cpp
=====================

.. code-block:: cpp

        #include<iostream>
        using namespace std;

        //функция вычисления количества купюр определенного достоинства (bill)
        //для погашения суммы (summa) 
        int count_bill(int summa, int bill)
        {
            int kk=0; //количество выплаченных купюр 
            for (kk=0; summa>=bill; kk++) //пока сумма превышает достоинство купюры добавляем купюру (k++)
            {
                summa=summa-bill;          //уменьшаем сумму
            }
            return kk;                      //возвращаем количество выданных купюр
        }


        //основная программа
        int main()
        {
            //количество купюр заданого достоинства
            int k10=100;
            int k50=100;
            int k100 = 100;
            int k500 = 50;
            int k1000 = 10;
            int k5000 = 10;
            int N,kk;
            cout<<"Введите сумму "<<endl;
            cin>>N;
            
            k5000 = count_bill(N,5000); //расчет количества купюр достоинством 5000 
            N = N - kk*5000;            //оставшаяся сумма после оплаты 5000-ми купюрами
            
            k1000 = count_bill(N,1000);
            N = N - kk*1000;

            k500 = count_bill(N,500);
            N = N - kk*500;
          
            k100 = count_bill(N,100);
            N = N - kk*100;
            
            k10 = count_bill(N,10);
            N = N - kk*10;

            cout<<"Сумма после оплаты "<<N<<endl;
            cout<<"Выдано купюр по 5000 "<<k5000<<endl;
            cout<<"Выдано купюр по 1000 "<<k1000<<endl;
            cout<<"Выдано купюр по 500 "<<k500<<endl;
            cout<<"Выдано купюр по 100 "<<k100<<endl;
            cout<<"Выдано купюр по 10 "<<k10<<endl;
        }


.. _ex0504:
        
Листинг ex_05_04.cpp
======================

.. code-block:: cpp

        #include <iostream>
        #include <cmath>
        using namespace std;

        //Отношение числа к сумме его цифр
        float check_number(int number)
        {
            //cout<<"Working check_number"<<endl;
            int sot,des,ed;
            int s; //сумма цифр числа
            float k=0.0;
            //Выделение цифр числа
            sot = number/100;
            des = (number%100)/10;
            ed = (number%100)%10;
            //Сумма цифр
            s = sot + des + ed;
            //Отношение
            k = float(number)/float(s);
            //cout<<"k = "<<k<<endl;
        
            return k;
        }

        int main ()
        {
            float max = 0; //максимальное отношение
            float temp;
            int number_max;
            for (int i=100;i<=999;i++)
            {
                temp = check_number(i);
                if (temp > max) 
                {
                    max = temp;
                    number_max = i;
                }
            }

            cout<<"Max = "<<max<<endl;
            cout<<"Число с максимальным отношением к сумме цифр = "<<number_max<<endl;
        }

.. _ex0505:

Листинг ex_05_05.cpp
=====================

.. code-block:: cpp

        #include <iostream>
        #include<cmath>
        using namespace std;

        int calc_points(int x, int y, int R)
        {
            int k=0;
            int beg_x = x-R;
            int end_x = x + R;
            int beg_y = y-R;
            int end_y = y + R;
            for (int n=beg_x; n<=end_x; n++)
            {
                for (int m=beg_y; m<=end_y; m++)
                {
                    if ((pow(n-x,2) + pow(m-y,2))<=R*R) k++;
                }
            }
            return k;
        }

        int main()
        {
            int x=0;
            int y=0;
            int R;
            cout<<"Введите координаты центра окружности"<<endl;
            cout<<"x?";
            cin>>x;
            cout<<"y?";
            cin>>y;
            cout<<"Введите радиус окружности"<<endl;
            cout<<"R?";
            cin>>R;
            cout<<"Количество точек с целочисленными координатами, попавших в круг радиуса"<<R<<endl;
            cout<<"c центорм в точке ("<<x<<","<<y<<") равно "<<calc_points(x,y,R)<<endl;
        }

