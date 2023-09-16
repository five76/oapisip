Установка Visual Studio Code  в Windows
==========================================

1. Выполнить инструкцию, представленную на странице

https://code.visualstudio.com/docs/cpp/config-mingw

2. Установить и настроить **git**

2.1) Скачать и установить git

https://git-scm.com/download/win

2.2) Добавить путь к git.exe в системную переменную PATH

https://www.delftstack.com/howto/git/add-git-to-path-on-windows/#manually-add-git-to-the-path-on-windows




.. figure:: instvsc/gitname.png
        :scale: 100%
        :align: center

10. Сгенерировать ключ доступа по SSH для вашей ОС

.. figure:: instvsc/ssh-keygen.png
        :scale: 100%
        :align: center
        
При создании нажать несколько раз Enter (принять параметры по-умолчанию)

11. Добавить SSH-ключ на GitHub

Для добавления ключа надо его скопировать. Например, таким образом можно отобразить ключ для копирования:

::

        cat ~/.ssh/id_rsa.pub
        
После копирования надо перейти на GitHub. Находясь на любой странице GitHub, в правом верхнем углу нажмите на картинку вашего профиля и в выпадающем списке выберите **«Settings»**. В списке слева надо выбрать поле **«SSH and GPG keys»**. После этого надо нажать **«New SSH key»** и в поле **«Title»** написать название ключа (например «Home»), а в поле **«Key»** вставить содержимое, которое было скопировано из файла ~/.ssh/id_rsa.pub.

12. Создать каталог **oapisip**

::
        
        mkdir ~/oapisip
        cd ~/oapisip

13. Склонировать в данный каталог свой репозиторий

.. figure:: instvsc/gitclon.png
        :scale: 100%
        :align: center
        
14. Перейти в каталог  **exercises/03_linprogr/class/**

::

        cd exercises/03_linprogr/class/

или

::

        cd ~/oapisip/isip20_XX/exercises/03_linprogr/class/
        
15. Запустить **VS Code in WSL** из этого каталога

::
        
        code .

.. figure:: instvsc/instvsc07.png
        :scale: 100%
        :align: center

16. Install the C/C++ extension

.. figure:: instvsc/instvsc08.png
        :scale: 100%
        :align: center

17. Открыть в Code 

::

        cd ~/oapisip/isip20_XX/exercises/03_linprogr/home
        code .
        
18. Вписать в task_03_01.cpp

::

        #include<iostream>
        #include<cmath>

19. Сохранить
20. Отправить на github

::


        git add .
        git commit -m “Update task_03_01.cpp”
        git push origin main

.. note:: Для скачивания имеющихся обновлений с github в свой локальный репозиторий: **git pull**

     

        


