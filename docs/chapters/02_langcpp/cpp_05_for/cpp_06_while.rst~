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


          
