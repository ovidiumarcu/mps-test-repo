SRC=golden_ratio.cpp
OUT=g_ratio
CFLAGS=-Wall

build:
	gcc $(SRC) $(CFLAGS) -o $(OUT)

.PHONY: clean
clean:
	rm $(OUT)

