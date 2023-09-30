#!/bin/sh
a=$(echo "$FT_NBR1 + $FT_NBR2")
2 b=$(echo "$a" | tr "\'\\\\\"?\!" '01234')
3 c=$(echo "$b" | tr 'mrdoc' '01234')
4 d="ibase=5; obase=23; $c"
5 e=$(echo "$d" |bc)
6 f=$(echo "$e" | tr '0123456789ABC' 'gtaio luSnemf')
7 echo "$f"
