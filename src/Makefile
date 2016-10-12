CC = gcc -g -O3 -w
SHARED_FLAG = -fPIC -shared
PROJECT = libmyimpltcl.so
 
INC  = -I./
INC += -I$(TCL_HOME)/include
LIB = -L$(TCL_HOME)/lib -ltcl8.5
 
all : $(PROJECT)
 
$(PROJECT) :
	$(CC) myimpltcl.cpp ${SHARED_FLAG} -o $(PROJECT) $(INC) $(LIB)
 
clean:
	rm -rf *.o *.a *.so