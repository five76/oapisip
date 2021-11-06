Листинги
~~~~~~~~~~

.. _ex1201:

Листинг ex_12_01.cpp
=====================

.. code-block:: cpp

        #include<iostream>
        //...
        
.. _ex1202:

Листинг ex_12_02.cpp
=====================

.. code-block:: cpp

        #include<iostream>
        //...
        
.. _ex1203:

Листинг ex_12_03.cpp
=====================

.. code-block:: cpp

        #include<iostream>
        //...


.. _ex1204:

Листинг ex_12_04.cpp
=====================

.. code-block:: cpp

        #include<iostream>
        //...
   
.. _ex1205:

Листинг ex_12_05.cpp
=====================

.. code-block:: cpp
       
        #include<iostream>
	#include<cmath>
	using namespace std;

	//Прототипы функции
	double discr(double a,double b, double c);
	double root_x1(double a,double b,double d);
	double root_x2(double a,double b,double d);

	//Основная программа----------------------
	int main(){
		double a,b,c;
		double x1,x2;
		double d;
		cout<<"Введите коэффициенты квадратного уравнения"<<endl;
		cin>>a>>b>>c;
		d = discr (a,b,c);
		if (d >= 0)
		{
		        x1 = root_x1(a,b,d);
		        x2 = root_x2(a,b,d);
		        printf("x1 = %5.2f, x2 = %5.2f",x1,x2);
		}
		else
		{
		        cout<<"Действительных корней нет"<<endl;
		}

	}
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	//Определение функций
	//Функция вычисления дискриминанта
	double discr(double a,double b, double c){
		double D;
		D=pow(b,2.0)-4*a*c;
		return D;
	}

	//Функции вычисления корней
	double root_x1(double a,double b,double d){
		double x1;
		x1 = (-b-sqrt(d))/(2*a) ;
		return x1;
	}

	double root_x2(double a,double b,double d){
		double x1;
		x1 = (-b+sqrt(d))/(2*a) ;
		return x1;
	}
