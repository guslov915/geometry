all: ./bin/geom ./bin/test	
test: ./bin/test

./bin/test: ./build/test/main.o ./build/src/func.o ./build/test/func_test.o
	g++ -Wall -Werror -o ./bin/test ./build/test/main.o ./build/src/func.o ./build/test/func_test.o -lm

./bin/geom: ./build/src/geom.o ./build/src/func.o
	g++ -Wall -Werror -o ./bin/geom ./build/src/geom.o ./build/src/func.o -lm

./build/test/main.o: ./test/main.c
	g++ -c -o ./build/test/main.o ./test/main.c -lm

./build/test/func_test.o: ./test/func_test.c
	g++ -c -o ./build/test/func_test.o ./test/func_test.c -lm

./build/src/geom.o: ./src/geom.c
	g++ -c -o ./build/src/geom.o ./src/geom.c -lm

./build/src/func.o: ./src/func.c
	g++ -c -o ./build/src/func.o ./src/func.c -lm

clean:
	rm -rf ./bin/* ./build/src/*o ./build/test/*o

