CC = g++
CFLAGS = -Wall -g

INCLUDE_DIR=include

INCLUDE_FILE = $(INCLUDE_DIR)/File/*.cpp
INCLUDE_ERROR = $(INCLUDE_DIR)/Error/*.cpp
INCLUDE_GRAGH = $(INCLUDE_DIR)/Gragh/*.cpp
INCLUDE_GRAMMAR = $(INCLUDE_DIR)/grammar/*.cpp



INCLUDE_CPP = $(INCLUDE_FILE) $(INCLUDE_ERROR) $(INCLUDE_GRAGH) $(INCLUDE_GRAMMAR)


BUILD_DIR = build

INPUT_DIR = input

GT = genTable
GT_SRC = $(GT)/*.cpp

GWA = genWordAnalyzer
GWA_SRC = $(GWA)/*.cpp 

WA = wordAnalyzer
WA_SRC = $(WA)/*.cpp

GUI = grammarAnalyzer/gui/

TLR1 = testLR1


# Gen Grammar Table
GT: $(GT_SRC) $(INCLUDE_CPP) $(INCLUDE_H)
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/genTable $(GT_SRC) $(INCLUDE_CPP)

# Gen Word Analyzer
GWA: $(GWA_SRC) $(GWA_H) $(INCLUDE_CPP) $(INCLUDE_H)
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $(GWA_SRC) $(INCLUDE_CPP)


gui: 
	mkdir -p $(BUILD_DIR)
	cmake -S ./grammarAnalyzer/gui/ -B $(BUILD_DIR)
	cmake --build $(BUILD_DIR) --target all

all: GT GWA gui

clean:
	rm -rf $(BUILD_DIR)/*
	rm -rf $(WA)/code.cpp
	rm -rf $(INPUT_DIR)/Sources.txt
run:
	./build/gui

rmCache:
	rm -rf $(INPUT_DIR)/*.txt $(INPUT_DIR)/*.gh $(INPUT_DIR)/token.txt $(INPUT_DIR)/*.prm
