CC=g++

Test: main.cpp */*.h
	$(CC) -o main main.cpp */*.h
	./main
	dot -Tpng DFA.gv -o ./output/DFA.png -Gdpi=600
	dot -Tpng NewDFA.gv -o ./output/NewDFA.png -Gdpi=600
	dot -Tpng table.dot -o ./output/table.png -Gdpi=600
	dot -Tpng FFTable.gv -o ./output/FFTable.png -Gdpi=600



