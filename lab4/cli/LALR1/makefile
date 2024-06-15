CC=g++

Test: *.cpp *.h ../LR1/*.h ../FF/*.h
	$(CC) -o LALR1 LALR1.cpp ../LR1/*.h ../FF/*.h
	./LALR1
	dot -Tpng DFA.gv -o DFA.png -Gdpi=600
	dot -Tpng NewDFA.gv -o NewDFA.png -Gdpi=600
	dot -Tpng table.dot -o table.png -Gdpi=600



