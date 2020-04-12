# Усложненный make-файл. Введены переменные для параметров компиляции и исполняемых файлов

.PHONY : все отладочные релизы чистые

RELEASE_FLAGS = -O2 -Wall -DNDEBUG
DEBUG_FLAGS    = -g -O0 -Wall
RELEASE_EXEC   = Казино-Роял
DEBUG_EXEC     = Казино-Роял-дбг
ИСТОЧНИК         = Kazino-Royal.cpp

все : отладочная версия

отладка : $ ( DEBUG_EXEC )

Kazino-Royal-dbg : hello.cpp
	g ++ $ ( DEBUG_FLAGS )  $ ( SOURCE ) -o $ ( DEBUG_EXEC ) 

выпуск : $ ( RELEASE_EXEC )

привет : $ ( ИСТОЧНИК )
	g ++ $ ( RELEASE_FLAGS )  $ ( SOURCE ) -o $ ( RELEASE_EXEC )

очистить :
	rm -f $ ( RELEASE_EXEC )  $ ( DEBUG_EXEC )
