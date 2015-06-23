cxx=g++

proxy: Proxy.o CWangPo.o CPanJinLian.o CJiaShi.o IKindWomen.o
	$(cxx) $(cxxflags) Proxy.o CWangPo.o CPanJinLian.o CJiaShi.o \
	IKindWomen.o -o proxy

Proxy.o : Proxy.cpp CWangPo.h CJiaShi.h CPanJinLian.h 
	g++ -c Proxy.cpp

CWangPo.o : CWangPo.cpp CWangPo.h IKindWomen.h
	g++ -c CWangPo.cpp

CPanJinLian.o : CPanJinLian.cpp CPanJinLian.h IKindWomen.h
	g++ -c CPanJinLian.cpp

CJiaShi.o : CJiaShi.cpp CJiaShi.h IKindWomen.h
	g++ -c CJiaShi.cpp

IKindWomen.o : IKindWomen.cpp IKindWomen.h
	g++ -c IKindWomen.cpp

clean:
	rm -rf *.o proxy
