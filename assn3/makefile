all:	qsort.cpp qsort.java
	g++ -o qsort qsort.cpp
	javac qsort.java

qsort: qsort.cpp
	g++ -o qsort qsort.cpp

qsort.class: qsort.java
	javac qsort.java

clean:
	rm -f qsort
	rm -f qsort.class

clean2:
	rm -f input1.txt
	rm -f input2.txt
	rm -f input3.txt
	rm -f python1.txt
	rm -f python2.txt
	rm -f python3.txt
	rm -f CPP1.txt
	rm -f CPP2.txt
	rm -f CPP3.txt
	rm -f java1.txt
	rm -f java2.txt
	rm -f java3.txt
