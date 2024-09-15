CXX = c++
CXXFLAGS = -Wall -g
OBJS = Student.o Teacher.o mapExampleStudent.o
TARGET = Grades

$(TARGET) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS)
