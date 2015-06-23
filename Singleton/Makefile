cxx=g++

singleton : Singleton.o CEmperor.o
	$(cxx) Singleton.o CEmperor.o -o singleton

Singleton.o : Singleton.cpp
	g++ -c Singleton.cpp

CEmperor.o : CEmperor.cpp
	g++ -c CEmperor.cpp

clean:
	rm -rf *.o singleton
