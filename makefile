clases:	main.o TrianguloPascal.o
	g++ main.o TrianguloPascal.o -o clases

clases.o: clases.cpp TrianguloPascal.h
	g++ -c TrianguloPascal.cpp

TrianguloPascal: TrianguloPascal.h TrianguloPascal.cpp
	g++ -c TrianguloPascal.cpp	
