SHELL = /bin/bash

main.out: main.c
	gcc $< -lm -std=c99 -o $@

clean:
	rm -f *.out
