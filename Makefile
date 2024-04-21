CC=g++
CFLAGS = -Wall -Wextra  # -g # g flag for gdb

SRC = ${*.cpp}
OBJ = ${SRC:.cpp=.o}
EXE = ${SRC:.cpp=}

main : main.cpp BienImmobilier.cpp Personne.cpp Contrat.cpp Transaction.cpp Agence.cpp Predicat.cpp Template.cpp

.PHONY:clean
clean:
	rm -rf *.o
	rm -f main test a.out


