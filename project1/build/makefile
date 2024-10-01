# 定义编译器和编译选项
CXX = g++
CXXFLAGS = -Wall -std=c++11 -g

# 定义目标可执行文件名
TARGET = test
# 定义源文件和头文件
SRCS = code.cpp
HEADERS = getInput.h

# 默认目标
all: $(TARGET)

# 编译目标
$(TARGET): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# 清理生成的文件
clean:
	rm -f $(TARGET)
