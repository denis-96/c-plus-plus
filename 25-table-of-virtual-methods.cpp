// ----------- Таблица виртуальных методов -----------

/*
#######################################################
Таблица виртуальных методов

∙ Динамический полиморфизм реализуется при помощи
таблиц виртуальных методов.
∙ Таблица заводится для каждого полиморфного класса.
∙ Объекты полиморфных классов содержат указатель на
таблицу виртуальных методов соответствующего класса.
∙ Вызов виртуального метода — это вызов метода по адресу
из таблицы (в коде сохраняется номер метода в таблице).
p -> occupation (); // p->vptr[1]();


#######################################################
Таблица виртуальных методов

struct Person {
    virtual ~ Person () {}
    string name () const { return name_ ;}
    virtual string occupation () const = 0;
    ...
};
struct Student : Person {
    string occupation () const { return " student " ;}
    virtual int group () const { return group_ ;}
    ...
};
Person
0. ~Person      0xab22
1. occupation   0x0000

Student
0. ~Student     0xab46
1. occupation   0xab68
2. group        0xab8a 


#######################################################
Построение таблицы виртуальных методов
struct Person {
    virtual ~ Person () {}
    virtual string occupation () = 0;
    ...
};
struct Teacher : Person {
    string occupation () {...}
    virtual string course () {...}
    ...
};
struct Professor : Teacher {
    string occupation () {...}
    virtual string thesis () {...}
    ...
};

Person
0. ~Person       0xab20
1. occupation    0x0000

Teacher
0. ~Teacher      0xab48
1. occupation    0xab60
2. course        0xab84

Professor
0. ~Professor    0xaba8
1. occupation    0xabb4
2. course        0xab84
3. thesis        0xabc8


#######################################################
Виртуальные методы в конструкторе и деструкторе

struct Person {
    virtual string name () const { return name_ ;}
    ...
};
struct Teacher : Person {
    Teacher ( string const & nm ) : Person ( nm )
    { cout << name (); }
    ...
};
struct Professor : Teacher {
    string name () const { return " Prof . " + name_ ;}
    ...
};
Professor p ( " Stroustrup " ); // "Stroustrup"
*/