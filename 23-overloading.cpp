// -------------------- Перегрузка -------------------

/*
#######################################################
Перегрузка функций

В отличие от C в C++ можно определить несколько функций с
одинаковым именем, но разными параметрами.

double square ( double d ) { return d * d ; }
int square (int i ) { return i * i ; }

При вызове функции по имени будет произведен поиск
наиболее подходящей функции:

int a = square (4); // square(int)
double b = square (3.14); // square(double)
double c = square (5); // square(int)
int d = square ( b ); // square(double)
float e = square (2.71f ); // square(double)


#######################################################
Перегрузка методов

struct Vector2D {
    Vector2D ( double x , double y ) : x ( x ) , y ( y ) {}
    Vector2D mult ( double d ) const
    { return Vector2D ( x * d , y * d ); }
    double mult ( Vector2D const & p ) const
    { return x * p.x + y * p.y ; }
    double x , y ;
};
Vector2D p (1 , 2);
Vector2D q = p.mult (10); // (10, 20)
double r = p.mult ( q ); // 50


#######################################################
Перегрузка при наследовании

struct File {
void write ( char const * s );
...
};
struct FormattedFile : File {
void write (int i );
void write ( double d );
using File::write ;
...
};
FormattedFile f ;
f.write (4);
f.write ( "Hello" );


#######################################################
Правила перегрузки

1. Если есть точное совпадение, то используется оно.
2. Если нет функции, которая могла бы подойти с учётом
преобразований, выдаётся ошибка.
3. Есть функции, подходящие с учётом преобразований:
    3.1 Расширение типов.
    char, signed char, short → int
    unsigned char, unsigned short → int/unsigned int
    float → double
    3.2 Стандартные преобразования (числа, указатели).
    3.3 Пользовательские преобразования.
    В случае нескольких параметров нужно, чтобы выбранная
    функция была строго лучше остальных.
NB: перегрузка выполняется на этапе компиляции.
*/