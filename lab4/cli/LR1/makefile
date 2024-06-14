CC=g++

Test: ./*.cpp *.h
	$(CC) -o LR1 LR1.cpp globle.h IndexedSet.h
	./LR1
	dot -Tpng DFA.gv -o DFA.png -Gdpi=600
