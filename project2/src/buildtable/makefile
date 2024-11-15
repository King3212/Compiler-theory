# 指定编译器
CC=g++

# 源文件和头文件的路径
SRCDIR=.
FILEDIR=../File
ERRORDIR=../Error
GRAMMARDIR=../grammar
# 可执行文件名
TARGET=./genTable

# 编译选项
CFLAGS=-g

# 编译所有 .cpp 文件
SOURCES=$(wildcard $(GRAMMARDIR)/*.cpp $(SRCDIR)/*.cpp $(ERRORDIR)/*.cpp $(FILEDIR)/*.cpp)

# 目标文件
OBJECTS=$(SOURCES:.cpp=.o)

# 编译目标
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES) 
	

# 清理目标
clean:
	rm -f $(TARGET) $(OBJECTS) 
