CC = gcc
CFLAGS = -Wall -g -I$(INCLUDE)

INCLUDE_DIR=include
INCLUDE_CPP = $(INCLUDE_DIR)/Error/*.cpp $(INCLUDE_DIR)/File/*.cpp $(INCLUDE_DIR)/Gragh/*.cpp $(INCLUDE_DIR)/grammar/*.cpp $(INCLUDE_DIR)/tokens/*.cpp 
INCLUDE_H = $(INCLUDE_DIR)/Error/*.h $(INCLUDE_DIR)/File/*.h $(INCLUDE_DIR)/Gragh/*.h $(INCLUDE_DIR)/grammar/*.h $(INCLUDE_DIR)/tokens/*.h

BUILD_DIR = build

INPUT_DIR = input

GT = genTable
GT_SRC = $(GT)/*.cpp

GWA = genWordAnalyzer
GWA_SRC = $(GWA)/*.cpp $(GWA)/analyzer/*.cpp
GWA_H = $(GWA)/*.h $(GWA)/analyzer/*.h

GA = grammarAnalyzer
GA_SRC = $(GA)/*.cpp

WA = wordAnalyzer
WA_SRC = $(WA)/*.cpp

# Gen Grammar Table
$(GT): $(GT_SRC) $(INCLUDE_CPP) $(INCLUDE_H)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $(GT_SRC) $(INCLUDE_CPP)

# Gen Word Analyzer
$(GWA): $(GWA_SRC) $(GWA_H) $(INCLUDE_CPP) $(INCLUDE_H)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $(GWA_SRC) $(INCLUDE_CPP)

# Word Analyzer
$(WA): $(WA_SRC) $(INCLUDE_CPP) $(INCLUDE_H)
	./$(BUILD_DIR)/$(GWA) $(INPUT_DIR)/word.rul
	cp $(BUILD_DIR)/code.cpp $(WA)/code.cpp
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $(WA_SRC) $(INCLUDE_CPP)

# Grammar Analyzer
$(GA): $(GA_SRC) $(INCLUDE_CPP) $(INCLUDE_H)

	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $(GA_SRC) $(INCLUDE_CPP)