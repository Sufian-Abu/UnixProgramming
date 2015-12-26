#!/bin/bash

mkdir temp7
cd temp7

read site
wget --page-requisites --span-hosts --convert-links --adjust-extension ${site}

cd ..

stat -c %s temp7

rm -r temp7

