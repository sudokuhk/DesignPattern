cxx=g++

strategy: Strategy.o CBackDoor.o CContext.o CBlockEnemy.o CGivenGreenLight.o IStrategy.o
	$(cxx) Strategy.o CContext.o CBackDoor.o CBlockEnemy.o CGivenGreenLight.o IStrategy.o \
	-o strategy

Strategy.o : Strategy.cpp CGivenGreenLight.h CBlockEnemy.h CBackDoor.h
	g++ -c Strategy.cpp

CBackDoor.o : CBackDoor.cpp 
	g++ -c CBackDoor.cpp

CContext.o : CContext.cpp 
	g++ -c CContext.cpp


CBlockEnemy.o : CBlockEnemy.cpp
	g++ -c CBlockEnemy.cpp

CGivenGreenLight.o : CGivenGreenLight.cpp
	g++ -c CGivenGreenLight.cpp

IStrategy.o : IStrategy.cpp 
	g++ -c IStrategy.cpp

clean:
	rm -rf *.o proxy
