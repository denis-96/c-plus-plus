
// -------------- Характеристики языка C++ ---------------

/*


#######################################################
Характеристики языка C++

Характеристики C++:
∙ сложный,
∙ мультипарадигмальный,
∙ эффективный,
∙ низкоуровневый,
∙ компилируемый,
∙ статически типизированный.


#######################################################
Сложность

∙ Описание стандарта занимает более 1300 страниц текста.
∙ Нет никакой возможности рассказать “весь C++” в рамках
одного, пусть даже очень большого курса.
∙ В C++ программисту позволено очень многое, и это влeчёт
за собой большую ответственность.
∙ На плечи программиста ложится много дополнительной
работы:
∙ проверка корректности данных,
∙ управление памятью,
∙ обработка низкоуровневых ошибок.


#######################################################
Мультипарадигмальный

На C++ можно писать программы в рамках нескольких
парадигм программирования:
∙ процедурное программирование
(код “в стиле C”),
∙ объектно-ориентированное программирование
(классы, наследование, виртуальные функции, . . . ).
∙ обобщённое программирование
(шаблоны функций и классов),
∙ функциональное программирование
(функторы, безымянные функции, замыкания),
∙ генеративное программирование
(метапрограммирование на шаблонах).


#######################################################
Эффективный

Одна из фундаментальных идей языков C и C++ — отсутствие
неявных накладных расходов, которые присутствуют в других
более высокоуровневых языках программирования.
∙ Программист сам выбирает уровень абстракции, на
котором писать каждую отдельную часть программы.
∙ Можно реализовывать критические по производительности
участки программы максимально эффективно.
∙ Эффективность делает C++ основным языком для
разработки приложений с компьютерной графикой (к
примеру, игры).


#######################################################
Низкоуровневый

Язык C++, как и C, позволяет работать напрямую с ресурсами
компьютера.
∙ Позволяет писать низкоуровневые системные приложения
(например, драйверы операционной системы).
∙ Неаккуратное обращение с системными ресурсами может
привести к падению программы.
В C++ отсутствует автоматическое управление памятью.
∙ Позволяет программисту получить полный контроль над
программой.
∙ Необходимость заботиться об освобождении памяти.


#######################################################
Компилируемый

C++ является компилируемым языком программирования.
Для того, чтобы запустить программу на C++, её нужно сначала
скомпилировать.
Компиляция — преобразование текста программы на языке
программирования в машинный код.
∙ Нет накладных расходов при исполнении программы.
∙ При компиляции можно отловить некоторые ошибки.
∙ Требуется компилировать для каждой платформы
отдельно.


#######################################################
Статическая типизация

C++ является статически типизированным языком.
1. Каждая сущность в программе (переменная, функция и
пр.) имеет свой тип,
2. и этот тип определяется на момент компиляции.
Это нужно для того, чтобы
1. вычислить размер памяти, который будет занимать
каждая переменная в программе,
2. определить, какая функция будет вызываться в каждом
конкретном месте.
Всё это определяется на момент компиляции и “зашивается” в
скомпилированную программу.
В машинном коде никаких типов уже нет — там идёт работа с
последовательностями байт.

*/