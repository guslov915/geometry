output: ./bin/geom
	
./bin/geom: ./build/src/geom.o ./build/src/func.o
	g++ -Wall -Werror -o ./bin/geom ./build/src/geom.o ./build/src/func.o -lm

./build/src/geom.o: ./src/geom.c
	g++ -c -o ./build/src/geom.o ./src/geom.c -lm

./build/src/func.o: ./src/func.c
	g++ -c -o ./build/src/func.o ./src/func.c -lm

clean:
	rm -rf ./bin/* ./build/src/*o

