# include  < iostream >
использование  пространства имен  std ;

int  main ( int argc, char ** argv)
{
    if (argc == 1 ) {
        cout << " Здравствуйте! Я могу вывести параметры командной строки. Попробуйте это \ n " ;
    } еще {
        for ( int i = 0 ; i <argc; i ++) {
            cout << i << ' \ t ' << argv [i] << endl;
        }
    }
    вернуть  0 ;
}
