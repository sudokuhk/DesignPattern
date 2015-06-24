cxx=g++
TARGET = factory
SOURCES = $(wildcard *.cpp)
OBJECTS = $(patsubst %.cpp,%.o, $(SOURCES))

all : $(TARGET)

%.d : %.cpp
	@set -e; rm -f $@; \
	$(cxx) -MM $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

ifneq ($(MAKECMDGOALS), clean)
include $(SOURCES:.cpp=.d)
endif

$(TARGET) : $(OBJECTS)
	$(cxx) -o $@ $(OBJECTS)

.PHONY : clean
clean:
	-rm -f $(TARGET)
	-rm -f *.o
	-rm -f *.d
