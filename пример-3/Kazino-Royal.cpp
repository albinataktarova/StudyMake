# include  < iostream >
# include  < cstdlib >
# include  < ctime >
# include  < cctype >
использование  пространства имен  std ;

int  main ()
{
    cout << " Добро пожаловать в Казино-Роял \ n " ;
    cout << " Сыграем в кости? \ n " ;
    cout << " Ты загадываешь число - я бросаю кость. \ n " ;
    cout << " Если ты угадал с трех попыток - ты выиграл \ n " ;
    cout << " Нет - проиграл, и настало время отчислений \ n " ;
    srandom ( time ( nullptr ));
    для ( int i = 0 ; i < 3 ; i ++) {
        cout << " введите число от 1 до 6: " ;
        int num;
        cin >> num;
        if (! cin. good ()) {
            cerr << " Это было число? \ n " ;
            возврат  2 ;
        }
        if (! isspace (cin. peek ())) {
            cerr << " Хвосты обрубаем \ n " ;
            возврат  2 ;
        }
        if ((num < 1 ) || (num> 6 )) {
            cerr << " С таким числом ты сразу проиграл \ n " ;
            возврат  2 ;
        }
        int res = random ()% 6 + 1 ;
        cout << " Выпало число " << res << endl;
        if (num == res) {
            cout << " Ты читер !!! \ n " ;
            вернуть  0 ;
        }
    }
    cout << " Может в любви повезет? \ n " ;
    возврат  1 ;
}
