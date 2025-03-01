studentheap: adress.o date.o student.o main.o
	g++ -g adress.o date.o student.o main.o -o studentheap

adress.o: adress.h adress.cpp
	g++ -g -c adress.cpp

date.o: date.h date.cpp
	g++ -g  -c date.cpp

student.o: student.h student.cpp
	g++ -g -c student.cpp

main.o: adress.h date.h student.h main.cpp
	g++ -g -c main.cpp

run: studentheap
	./studentheap

debug: studentheap
	gdb studentheap

clean:
	rm *.o
	rm studentheap
			