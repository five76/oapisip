******************
Элементы языка С++
******************

Алфавит
"""""""
Алфавит. В алфавит языка Си++ входят:

* латинские буквы: от a до z (строчные) и от А до Z (прописные);
* десятичные цифры: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9;
* специальные символы:" { } , I [ ] ( ) + - / % \ ; ' : = > ! ? < & # ~ ^ . *

К специальным символам относится также пробел. 
В комментариях, строках и символьных константах могут ис­пользоваться и другие знаки (например, русские буквы). 
Комбинации некоторых символов, не разделенных пробелами, интерпретируются как один значимый символ. К ним относятся:

++ — == && || «» >= <= += - = *= / = ?: /* */ //

Идентификаторы
""""""""""""""

Для символического обозначения величин, имен функций и т.п. используются имена или идентификаторы. Идентификаторы в языке Си++ – это последовательность знаков, начинающаяся с буквы или знака подчеркивания. В идентификаторах можно использовать заглавные и строчные латинские буквы, цифры и знак подчеркивания. Длина идентификаторов произвольная. 

**Примеры правильных идентификаторов:**

*abc*

*A12*

*NameOfPerson*

*BYTES_PER_WORD*

.. note:: abc и Abc – два разных идентификатора, т.е. заглавные и строчные буквы различаются. 

**Примеры неправильных идентификаторов:**

12X 
a-b

Служебные слова
"""""""""""""""
Служебные слова в Си++ — это идентификаторы, назначение которых однозначно определено в языке. Они не могут быть использованы как свобод­но выбираемые имена. Полный список служебных слов зависит от реализации языка, т. е. различается для разных компиляторов. Од­нако существует неизменное ядро, которое определено стандар­том Си++.

.. figure:: 02_system_words.png
       :scale: 100 %
       :align: center
       :alt: asda

