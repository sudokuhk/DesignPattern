cxx=g++
target = factory
objects = Factory.o \
	CBlackHuman.o CBlackHumanFactory.o \
	CWhiteHuman.o CWhiteHumanFactory.o \
	CYellowHuman.o CYellowHumanFactory.o

$(target) : $(objects)
	$(cxx) -o $(target) $(objects)

$(object) : %.o : %.cpp
	$(cxx) -c $< -O $@

%d : %.cpp
	@set -e; rm -f $@; \
	$(cxx) -MM $(CPPFLAGS) $< > $@.;\
	sed ’s,$*\.o[ :]*,1\.o $@ :,g’ < $@. > $@;
#	rm -f $@.

.PHONY : clean
clean:
	-rm -rf *.o $(target)
