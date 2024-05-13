CC = g++

CFLAGS = -Wall -g

OBJS = main.o util.o scan.o parse.o getTree.o


tiny: $(OBJS)
	$(CC) $(CFLAGS) -o tiny $(OBJS)

main.o: main.cpp globals.h util.h scan.h parse.h getTree.h
	$(CC) $(CFLAGS) -c main.cpp

getTree.o: getTree.c globals.h util.h scan.h parse.h
	$(CC) $(CFLAGS) -c getTree.c

util.o: util.c util.h globals.h
	$(CC) $(CFLAGS) -c util.c

scan.o: scan.c scan.h util.h globals.h
	$(CC) $(CFLAGS) -c scan.c

parse.o: parse.c parse.h scan.h globals.h util.h
	$(CC) $(CFLAGS) -c parse.c

clean:
	rm -f tiny $(OBJS)
