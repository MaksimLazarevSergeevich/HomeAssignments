output: main.o transformer.o autobot.o decepticon.o
	g++ main.o transformer.o autobot.o decepticon.o -o output

main.o: main.cpp
	g++ -c main.cpp

transformer.o: transformer.cpp
	g++ -c transformer.cpp

autobot.o: autobot.cpp
	g++ -c autobot.cpp

decepticon.o: decepticon.cpp
	g++ -c decepticon.cpp

clean:
	rm *.o output