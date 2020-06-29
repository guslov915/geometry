output: ./bin/geom
	
./bin/geom: ./build/geom.o ./build/func.o
	g++ -Wall -Werror -o ./bin/geom ./build/geom.o ./build/func.o -lm

./build/geom.o: ./src/geom.c
	g++ -c -o ./build/geom.o ./src/geom.c -lm

./build/func.o: ./src/func.c
	g++ -c -o ./build/func.o ./src/func.c -lm

clean:
	rm -rf ./bin/* ./build/*o

