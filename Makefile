CC := gcc
#CFLAGS := 
DEST := ./build/

all: recursion_power_to.c
	mkdir -p build
	$(CC) recursion_power_to.c -lcs50 -o $(DEST)/recursion_power_to 