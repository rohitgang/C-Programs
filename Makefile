CFLAGS = -std=c99
EXE = inClassSignal
OBJS = inclassSignal.o
all : $(EXE)
$(EXE) : $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o $(EXE)
clean : 
	rm -f inclassSignal.o inClassSignal