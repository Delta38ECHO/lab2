all: donut

.PHONY: clean

#Code to be entered here for what Make does:
donut: lab2.c
	gcc lab2.c -o donut -lm -Wall

clean:
	@rm -rf a.out donut 2>/dev/null
