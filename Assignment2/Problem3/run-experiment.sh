line=`wc -l < $1`

echo "Total number of lines $line"
counter=0
while [ $counter -lt $line ];do
url=`cat -n $1`
size=`sh perform-measurement.sh $url`
 echo "$counter  $url $size"
 let counter=counter+1 
done
