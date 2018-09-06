#Alan Davis
#Count.bash :)

function count
{
echo "$1" "$2" "$3"
}

for file in *
do 
	if [ -f "$file" ];
	then
		count "$file" $(wc -lw "$file")
	fi
done
