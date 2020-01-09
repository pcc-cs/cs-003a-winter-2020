# Copyright (c) 2020, Sekhar Ravinutala.

hello: hello.o greeting.o
	g++ -o hello hello.o greeting.o
hello.o: greeting.h hello.cpp
	g++ -c hello.cpp
greeting.o: greeting.h greeting.cpp
	g++ -c greeting.cpp
