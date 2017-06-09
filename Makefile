CXX = g++-5
CXXFLAGS = -std=c++14 -MMD -g
OBJECTS = board.o player.o main.o academics.o
DEPENDS = ${OBJECTS:.o=.d}
EXEC =a.out
${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}

