#!/bin/bash

read HTMLFILE

read TARGETFILE

grep -o 'http://[^"]*' ${HTMLFILE} > ${TARGETFILE}
