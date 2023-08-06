// ----------------------- Методы ---------------------

/*
#######################################################
Методы

Метод — это функция, определённая внутри структуры.

struct Segment {
    Point p1;
    Point p2;
        double length () {
        double dx = p1.x - p2.x;
        double dy = p1.y - p2.y;
        return sqrt ( dx * dx + dy * dy );
    }
};

int main () {
    Segment s = { { 0.4 , 1.4 } , { 1.2 , 6.3 } };
    cout << s.length () << endl ;
    return 0;
}

Методы реализованы как функции с неявным параметром
this, который указывает на текущий экземпляр структуры.

struct Point
{
    double x;
    double y;
    // Point *this
    void shift(double x, double y)
    {
        this->x += x;
        this->y += y;
    }
};


#######################################################
Методы: объявление и определение

Методы можно разделять на объявление и определение:

struct Point
{
    double x ;
    double y ;
    void shift ( double x , double y );
};

void Point::shift ( double x , double y)
{
    this->x += x ;
    this->y += y ;
}


#######################################################
Абстракция и инкапсуляция

Использование методов позволяет объединить данные и
функции для работы с ними.

struct IntArray2D {
    int & get ( size_t i , size_t j ) {
        return data [ i * b + j ];
    }
    size_t a ;
    size_t b ;
    int * data ;
};
IntArray2D m = foo ();
for ( size_t i = 0; i != m.a; ++ i )
    for ( size_t j = 0; j != m.b; ++ j)
        if ( m.get (i , j) < 0) m.get (i , j) = 0;

*/