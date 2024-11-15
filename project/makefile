CC=g++
CFLAGS=-g -o2


INCLUDE=./include
FILEDIR=$(INCLUDE)/File
ErrorDir=$(INCLUDE)/Error
GrammarDir=$(INCLUDE)/grammar
# make genTable

GT=./genTable
GT_Src=$(GT)/src

GT_MainDir=$(GT_Src)/main
GT_Target=$(GT)/build/genTable

GT_Sources=$(wildcard $(GrammarDir)/*.cpp $(ErrorDir)/*.cpp $(FileDir)/*.cpp $(GT_MainDir)/*.cpp)

GT_Objects=$(GT_Sources:.cpp=.o)

genTable: $(GT_Objects)
	$(CC) $(CFLAGS) -o $(GT_Target) $(GT_Sources)


# gen word analyzer code

GWA=./genWordAnalyzer
GWA_Src=$(GWA)/src
GWA_FileDir=$(INCLUDE)/File
GWA_ErrorDir=$(INCLUDE)/Error
GWA_GraghDir=$(GWA_Src)/Gragh
GWA_BuildDir=$(GWA)/build

GWA_Target=$(GWA_BuildDir)/genWordAnalysis

GWA_Sources=$(wildcard $(GWA_ErrorDir)/*.cpp $(GWA_FileDir)/*.cpp $(GWA_GraghDir)/*.cpp $(GWA_Src)/*.cpp)

GWA_Objects=$(GWA_Sources:.cpp=.o)

genWordAnalyzer: $(GWA_Objects)
	$(CC) $(CFLAGS) -o $(GWA_Target) $(GWA_Sources)


# make word analyzer
WA=./wordAnalyzer
WA_Src=$(WA)/src

WA_Target=$(WA)/build/getTokens

WA_Sources=$(wildcard $(WA_Src)/*.cpp)

WA_Objects=$(WA_Sources:.cpp=.o)

getTokens: $(WA_Objects)
	rm $(WA_Src)/code.cpp
	$(GWA_Target) $(GWA)/inputFiles/words.rul > $(WA_Src)/code.cpp
	$(CC) $(CFLAGS) -o $(WA_Target) $(WA_Sources)


# make grammar analyzer

GA=./grammarAnalyzer
GA_Src=$(GA)/src
GA_AnalyzerDir=$(GA_Src)/analyzer
GA_MainDir=$(GA_Src)/main
GA_FileDir=$(GA_Src)/File
GA_ErrorDir=$(GA_Src)/Error
GA_TokensDir=$(GA_Src)/tokens
GA_BuildDir=$(GA)/build
GA_InputDir=$(GA)/inputFiles

GA_Target=$(GA)/build/analyzer

GA_Sources=$(wildcard $(GA_AnalyzerDir)/*.cpp $(GA_MainDir)/*.cpp $(GA_FileDir)/*.cpp $(GA_ErrorDir)/*.cpp $(GA_TokensDir)/*.cpp)

GA_Objects=$(GA_Sources:.cpp=.o)

analyzer: $(GA_Objects)
	rm $(GA_InputDir)/getTokens
	cp $(WA_Target) $(GA_InputDir)/getTokens
	./$(GT_Target) $(GA_InputDir)/grammar.rul
	mv $(GT)/build/table.txt $(GA_InputDir)/table.txt
	$(CC) $(CFLAGS) -o $(GA_Target) $(GA_Sources)

clean:
	rm $(GT_Objects) $(GT_Target) $(GWA_Objects) $(GWA_Target) $(WA_Objects) $(WA_Target) $(GA_Objects) $(GA_Target)


all: genTable genWordAnalyzer getTokens analyzer