#!/bin/bash

t=0

$(make clean)
$(make qsort)
$(make qsort.class)

$(python3 ranList.py 100000 > input1.txt)
$(python3 ranList.py 100000 > input2.txt)
$(python3 ranList.py 100000 > input3.txt)

t=$SECONDS
$(python3 qsort.py < input1.txt > python1.txt)
$(python3 qsort.py < input2.txt > python2.txt)
$(python3 qsort.py < input3.txt > python3.txt)
echo "Python Experiment took $(( $SECONDS-$t )) seconds" 

t=$SECONDS
$(./qsort < input1.txt > CPP1.txt)
$(./qsort < input2.txt > CPP2.txt)
$(./qsort < input3.txt > CPP3.txt)
echo "CPP Experiment took $(( $SECONDS-$t )) seconds" 

t=$SECONDS
$(java qsort < input1.txt > java1.txt)
$(java qsort < input2.txt > java2.txt)
$(java qsort < input3.txt > java3.txt)
echo "java Experiment took $(( $SECONDS-$t )) seconds"
