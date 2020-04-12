# Усложненный make-файл. Введены переменные для параметров компиляции и исполняемых файлов

.PHONY : все отладочные релизы чистые

RELEASE_FLAGS = -O2 -Wall -DNDEBUG
DEBUG_FLAGS    = -g -O0 -Wall
RELEASE_EXEC   = привет
DEBUG_EXEC     = привет-dbg
SOURCE         = hello.cpp

все : отладочная версия

отладка : $ ( DEBUG_EXEC )

hello-dbg : hello.cpp
	g ++ $ ( DEBUG_FLAGS )  $ ( SOURCE ) -o $ ( DEBUG_EXEC ) 

выпуск : $ ( RELEASE_EXEC )

привет : $ ( ИСТОЧНИК )
	g ++ $ ( RELEASE_FLAGS )  $ ( SOURCE ) -o $ ( RELEASE_EXEC )

очистить :
	rm -f $ ( RELEASE_EXEC )  $ ( DEBUG_EXEC )
