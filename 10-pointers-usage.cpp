// ------------- Использование указателей ------------

/*
#######################################################
Два способа передачи массива

Функция для поиска элемента в массиве:

bool contains (int * m , int size , int value ) {
    for ( int i = 0; i != size ; ++ i )
        if ( m [ i ] == value )
            return true ;
    return false ;
}

bool contains (int * p , int * q , int value ) {
    for (; p != q ; ++ p )
        if (* p == value )
            return true ;
    return false ;
}


#######################################################
Возрат указателя из функции

Функция для поиска максимума в массиве:
int max_element (int * p , int * q ) {
    int max = * p ;
    for (; p != q ; ++ p )
        if (* p > max )
            max = * p ;
    return max ;
}
int m [10] = {...};
int max = max_element (m , m + 10);
cout << " Maximum = " << max << endl ;


Функция для поиска максимума в массиве:
int * max_element ( int * p , int * q ) {
    int * pmax = p ;
    for (; p != q ; ++ p )
        if (* p > * pmax )
            pmax = p ;
    return pmax ;
}
int m [10] = {...};
int * pmax = max_element (m , m + 10);
cout << " Maximum = " << * pmax << endl ;


#######################################################
Возрат значения через указатель

Функция для поиска максимума в массиве:

bool max_element ( int * p , int * q , int * res ) {
    if ( p == q )
        return false ;
    * res = *p ;
    for (; p != q ; ++ p )
        if (* p > * res )
            * res = *p ;
    return true ;
}
int m [10] = {...};
int max = 0;
if ( max_element (m , m + 10 , & max ))
cout << " Maximum = " << max << endl ;


#######################################################
Возрат значения через указатель на указатель

Функция для поиска максимума в массиве:

bool max_element ( int * p , int * q , int ** res ) {
    if ( p == q )
        return false ;
    * res = p;
    for (; p != q ; ++ p )
        if (* p > ** res )
            * res = p;
    return true ;
}
int m [10] = {...};
int * pmax = 0;
if ( max_element (m , m + 10 , & pmax ))
cout << " Maximum = " << * pmax << endl ;

*/