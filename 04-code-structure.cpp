// ----------- Структура кода на C++ --------------

/*

#######################################################
Разбиение программы на файлы

Зачем разбивать программу на файлы?
∙ С небольшими файлами удобнее работать.
∙ Разбиение на файлы структурирует код.
∙ Позволяет нескольким программистам разрабатывать
приложение одновременно.
∙ Ускорение повторной компиляции при небольших
изменениях в отдельных частях программы.

Файлы с кодом на C++ бывают двух типов:
1. файлы с исходным кодом (расширение .cpp, иногда .C),
2. заголовочные файлы (расширение .hpp или .h).


#######################################################
Заголовочные файлы

∙ Файл foo.cpp:
// определение (definition) функции foo
void foo ()
{
bar ();
}

∙ Файл bar.cpp:
// определение (definition) функции bar
void bar () { }
Компиляция этих файлов выдаст ошибку.


∙ Файл foo.cpp:
// объявление (declaration) функции bar
void bar ();
// определение (definition) функции foo
void foo ()
{
bar ();
}

∙ Файл bar.cpp:
// определение (definition) функции bar
void bar () { }


#######################################################
Заголовочные файлы

Предположим, что мы изменили функцию bar.

∙ Файл foo.cpp:
void bar ();
void foo ()
{
bar ();
}

∙ Файл bar.cpp:
int bar () { return 1; }
Данный код некорректен — объявление отличается от
определения. (Неопределённое поведение.)


#######################################################
Заголовочные файлы

Добавим заголовочный файл bar.hpp.

∙ Файл foo.cpp:
# include " bar . hpp "
void foo ()
{
bar ();
}

∙ Файл bar.cpp:
int bar () { return 1; }

∙ Файл bar.hpp:
int bar ();


#######################################################
Двойное включение

Может случиться двойное включение заголовочного файла.

∙ Файл foo.cpp:
# include " foo . hpp "
# include " bar . hpp "
void foo ()
{
bar ();
}

∙ Файл foo.hpp:
# include " bar . hpp "
void foo ();


#######################################################
Стражи включения

Это можно исправить двумя способами:

∙ (наиболее переносимо) Файл bar.hpp:
# ifndef BAR_HPP
# define BAR_HPP
int bar ();
# endif

∙ (наиболее просто) Файл bar.hpp:
# pragma once
int bar ();


Резюме: .cpp — для определений, .hpp — для объявлений.

*/