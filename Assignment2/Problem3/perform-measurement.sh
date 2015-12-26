
#!/bin/bash

mkdir abu
cd abu
wget --output-document=amarfile.html $1
r=`wc -c < amarfile.html`
echo $r
cd ..
rm -r abu
