# Простой make-файл без релиза, для релиза и дебага

.PHONY : все отладочные релизы чистые

все : отладочная версия

отладка : hello-dbg

hello-dbg : hello.cpp
	g ++ -g -O0 hello.cpp -o hello-dbg -Wall

выпуск : привет

привет : hello.cpp
	g ++ -O2 hello.cpp -o hello -DNDEBUG -Wall

очистить :
	rm -rf hello * .o hello-dbg
