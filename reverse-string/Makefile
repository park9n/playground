GTEST_INCLUDE = /usr/local/include
GTEST_LIB = gtest
GTEST_MAIN_LIB = gtest_main

CXX = g++
CXXFLAGS = -std=c++11 -c -Wall
LD_FLAGS = -l$(GTEST_LIB) -l$(GTEST_MAIN_LIB) -pthread

OBJECTS = main.o test.o
TARGET = reverse

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) -o $(TARGET) $(OBJECTS) $(LD_FLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $<

clean:
	rm -f $(TARGET) $(OBJECTS)
                                                        
.PHONY: all clean
