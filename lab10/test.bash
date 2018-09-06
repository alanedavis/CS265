#Mark Boady
#CS 265 Drexel University

#Clean out old versions
make clean
make
#Loop through 0 to 10
for i in {6..14}
do
	size=$((2**i))
	echo ""
	echo "****** Testing Size $size ************"
	#Binary Search in CPP
	before=$SECONDS
	./bsearch $size > /dev/null
	after=$SECONDS
	diff=$((after-before))
	echo "CPP Binary Search took $diff seconds to test array with $size elements."
	#Linear Search in CPP
	before=$SECONDS
	./lsearch $size > /dev/null
	after=$SECONDS
	diff=$((after-before))
	echo "CPP Linear Search took $diff seconds to test array with $size elements."
	echo ""
	#Binary Search in Python
	before=$SECONDS
	python3 bsearch.py $size > /dev/null
	after=$SECONDS
	diff=$((after-before))
	echo "Python 3 Binary Search took $diff seconds to test array with $size elements."
	#Linear Search in Python
	before=$SECONDS
	python3 lsearch.py $size > /dev/null
	after=$SECONDS
	diff=$((after-before))
	echo "Python 3 Linear Search took $diff seconds to test array with $size elements."
	echo ""
	#Binary Search in Java
        before=$SECONDS
	java bsearch $size > /dev/null
        after=$SECONDS
        diff=$((after-before))
        echo "Java Binary Search took $diff seconds to test array with $size elements."
        #Linear Search in Java
        before=$SECONDS
        java lsearch $size > /dev/null
        after=$SECONDS
        diff=$((after-before))
        echo "Java Linear Search took $diff seconds to test array with $size elements."
        echo ""
done
