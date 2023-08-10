CC=g++
CFLAGS= -o
OBJS=main.o mathTool.o Calculator.o
TARGET=main

all: $(TARGET)
 
clean:
	rm -rf *.o
	rm -rf $(TARGET)
 
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $@ $(OBJS)

main.o: mathTool.h Calculator.h main.cpp
	$(CC) -c main.cpp

mathTool.o: mathTool.h mathTool.cpp
	$(CC) -c mathTool.cpp

Calculator.o: Calculator.h Calculator.cpp
	$(CC) -c Calculator.cpp
