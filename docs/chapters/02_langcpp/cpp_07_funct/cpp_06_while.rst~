Цикл с предусловием WHILE
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Этот вид оператора цикла называют **цикл с предусловием**.

.. figure:: img/06_01.png
   :scale: 100%
   :align: center

.. figure:: img/06_02.png
   :scale: 100%
   :align: center

.. figure:: img/06_03.png
   :scale: 100%
   :align: center

**Пример_WHILE01**: 

.. code-block:: cpp

        #include <iostream>
        using namespace std;
        int main()
        {
                int i=0;
                while (i<=10)
                { //(*)
                        cout<<i<<" ";
                        i++;
                }
                cout<<endl;
                i=10;
                while (i>=1)
                { //(*)
                        cout<<i<<" ";
                        i--;
                }
                cout<<endl;
                system("pause");
        }

.. figure:: img/06_04.png
   :scale: 100%
   :align: center

**Пример_WHILE02**: Суммирование произвольных чисел, больших 0, вводимых склавиатуы. Выполнение суммирование должно прерваться при вводе отрицательного значения.

.. code-block:: cpp

        #include <iostream>
        #include <clocale>
        using namespace std;
        int main(){
                setlocale(LC_CTYPE,"rus");
                float s=0,i;
                while (true){
                        cout<<"\nВведите произвольное положительное число: ";
                        cin>>i;
                        if (i<0)break;
                        s+=i; //s=s+1
                }
                cout<<"\ns= "<<s<<endl;
        }

.. note:: Для выхода из бесконечного цикла (условие **true** никогда не станет **false**) используется оператор **break**

**Пример_WHILE03**:
Вывести на экран таблицу значений функции. 

.. figure:: img/06_05.png
   :scale: 100%
   :align: center

Вывод осуществить в два столбца

.. figure:: img/lec_while_03.png
   :scale: 100%
   :align: center

**Листинг WHILE03**

.. code-block:: cpp

        #include <iostream>
        #include <cmath>
        #include<stdio.h>
        using namespace std;
        #define pi 3.14             //макропеременная pi

        int main()
        {
           
                float x,y,z,a,b,dx;
                cout<<"Введите начальное значение аргумента: ";
                cin>>a;
                cout<<"Введите конечное значение аргумента: ";
                cin>>b;
                cout<<"Введите шаг изменения аргумента: ";
                cin>>dx;
                x=a;                    //начальное значение переменной цикла
                while (x<=b)
                {
                   z=sin((pi*x)/3);
                   if (z<0) cout<<"f("<<x<<") = Функция не определена"<<endl;   //действительного корня из числа меньше 0 нет
                   else
                   {
                                y=log10(3.0)+x*sqrt(5.0*z);
                                printf("f(%5.2f) = %5.2f\n",x,y);
                   }
                   x+=dx; //x=x+dx Увеличение значения аргумента
                }
            return 0;
        }

**Пример_WHILE04**:
Составить программу для вычисления зачения функции. 

.. figure:: img/06_06.png
   :scale: 100%
   :align: center

**Математическая модель**

Необходимо составить *рекуррентную* формулу, в которой каждый последующий член ряда вычисляется при помощи предыдущего. Из формулы видно, что шаг изменения знаменателя равен 2. (1!, 3!,5!,...). Обозначим nm! - знаменатель m-го члена ряда, имеем:

.. figure:: img/06_07.png
   :scale: 100%
   :align: center

Таким образом, получаем рекуррентную формулу:

.. figure:: img/06_08.png
   :scale: 100%
   :align: center

**Листинг WHILE04**

.. code-block:: cpp

        #include <iostream>
        #include <clocale>
        #include <cmath>
        #include <iomanip>
        using namespace std;
        #define pi 3.14 //определяем макропеременную pi
        int main()
        {
           
                setlocale(LC_CTYPE,"rus");
                const float eps=exp(-7.0); //предел уменьшения члена ряда
                double xgrad,x,s,u;
                unsigned int n;
                cout<<"Введите значение угла: ";
                cin>>xgrad;
                x=xgrad*pi/180;//перевод угла в радианы
                s=x;u=x;n=1;
                while (abs(u)>eps) 
                {
                        n=n+2;// см. матем модель (**)
                        u=-u*x*x/((n-1)*n);//вычисление очередного члена ряда см. матем модель(*)
                        //каждый следующий член ряда вычисляется как произведение предыдущего u
                        //на -x^2/((n-1)*n)
                        s=s+u;
                }
                cout<<"Sin("<<xgrad<<")= "<<s<<endl;
        }

