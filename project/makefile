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

GA = grammarAnalyzer
GA_SRC = $(GA)/*.cpp $(GA)/analyzer/*.cpp


WA = wordAnalyzer
WA_SRC = $(WA)/*.cpp

TLR1 = testLR1


# Gen Grammar Table
GT: $(GT_SRC) $(INCLUDE_CPP) $(INCLUDE_H)
	echo $(CC) $(CFLAGS) -o $(BUILD_DIR)/genTable $(GT_SRC) $(INCLUDE_CPP)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/genTable $(GT_SRC) $(INCLUDE_CPP)

# Gen Word Analyzer
GWA: $(GWA_SRC) $(GWA_H) $(INCLUDE_CPP) $(INCLUDE_H)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $(GWA_SRC) $(INCLUDE_CPP)

# Word Analyzer
WA: $(INCLUDE_CPP) $(INCLUDE_H)
	./$(BUILD_DIR)/GWA $(INPUT_DIR)/word.rul > $(BUILD_DIR)/code.cpp
	cp $(BUILD_DIR)/code.cpp $(WA)/code.cpp
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/getTokens $(WA_SRC) $(INCLUDE_CPP)

# Grammar Analyzer
GA: $(GA_SRC) $(INCLUDE_CPP) $(INCLUDE_H)
	./$(BUILD_DIR)/genTable
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $(GA_SRC) $(INCLUDE_CPP)
	
all: GT GWA WA GA

clean:
	rm -rf $(BUILD_DIR)/*
	rm -rf $(WA)/code.cpp
