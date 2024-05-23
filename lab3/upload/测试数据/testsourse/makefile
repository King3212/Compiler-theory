CC=python

Test: ./test.tny ./test_error.tny ./split.py
	rm -rf ../split_output/*
	$(CC) split.py
	clear

clean: 
	rm -rf ../testfiles/*
