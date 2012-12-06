TARGETS=\
  main.out \

all: $(TARGETS)

main.out: main.o bumpngrind.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c -fasm-blocks -o $@ $<

clean:
	rm -f *.o $(TARGETS)
