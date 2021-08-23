#!/bin/sh
cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | sed 's/:\(.*\)//g' | rev | sort -r |  tr '\n' ' ' | sed 's/ /, /g' | sed 's/\(.*\), /\1./' | tr -d '\n'
