#!/bin/sh
echo $FT_NBR1 + $FT_NBR2 | tr "\'\\\\\"\?\!mrdoc" '0123401234' | xargs echo "ibase=5; obase=D;" | bc | tr "0123456789ABC" "gtaio luSnemf"