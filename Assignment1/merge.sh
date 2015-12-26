#! /bin/bash

cat file1.txt file2.txt
while IFS= read -r line
do
#echo "$line"
echo -e "$line\n" >> merge.txt

done <"$file2.txt"
