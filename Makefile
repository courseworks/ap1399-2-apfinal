CXX = g++
CXXFLAGS = -std=c++2a -Wall -I h -I /usr/local/include/gtest/ -c
LXXFLAGS = -std=c++2a -Ih -pthread
OBJECTS = ./obj/grade.o ./obj/student.o ./obj/main.o ./obj/apfinal_unittest.o 
GTEST = /usr/local/lib/libgtest.a
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) -o $(TARGET) $(OBJECTS) $(GTEST)
./obj/student.o: ./cpp/student.cpp ./h/grade.h ./cpp/grade.cpp
	$(CXX) $(CXXFLAGS) ./cpp/student.cpp -o ./obj/student.o
./obj/grade.o: ./cpp/grade.cpp
	$(CXX) $(CXXFLAGS) ./cpp/grade.cpp -o ./obj/grade.o
./obj/apfinal_unittest.o: ./cpp/apfinal_unittest.cpp
	$(CXX) $(CXXFLAGS) ./cpp/apfinal_unittest.cpp -o ./obj/apfinal_unittest.o
./obj/main.o: ./cpp/main.cpp ./h/apfinal.h
	$(CXX) $(CXXFLAGS) ./cpp/main.cpp -o ./obj/main.o
clean:
	rm -fv $(TARGET) $(OBJECTS)
