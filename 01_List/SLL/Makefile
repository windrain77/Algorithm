# Author : hojinm@gmail.com
################################################################################
#  VARIABLES & FLAGS
################################################################################
PROJECT_ROOT = .
CROSS = 
CC    = $(CROSS)gcc
CXX   = $(CROSS)g++
AR    = $(CROSS)ar
LD    = $(CROSS)ld
STRIP = $(CROSS)strip

SRCS = $(PROJECT_ROOT)/src

INCS = -I$(PROJECT_ROOT) \
	   -I$(PROJECT_ROOT)/inc \

LDFLAGS = -ldl \
		  -lm \

CFLAGS = -O2 -Wall \
		 -D_REENTRANT \
		 $(INCS)

CXXFLAGS = $(CFLAGS)

# Add object files #############################################################
OBJS= \
	 $(SRCS)/main.o \
	 $(SRCS)/SLL.o

# Compile ######################################################################
CP  = cp
RM  = rm
MV  = mv
ZIP = gzip
TAR = tar

#Single Linked List
TARGET=SLL

.SUFFIXES: .c .cc .cpp .cxx .h .hh .hpp .hxx .o 

.c.o:
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ -c $< 

.PHONY : all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	@echo
	$(CC) -o $@ $(OBJS) $(CFLAGS) $(LDFLAGS)
	@$(RM) -f `find . -name *.o | grep -e [A-Za-z0-9*][.]o`
	@$(STRIP) $@
	@echo "[1;34m-------------------- Build \"$(TARGET)\" --------------------[0m"

clean:
	$(RM) -f `find . -name *.o | grep -e [A-Za-z0-9*][.]o`
	$(RM) -f $(TARGET)
	@echo "[1;31m-------------------- Clean \"$(TARGET)\" --------------------[0m"

