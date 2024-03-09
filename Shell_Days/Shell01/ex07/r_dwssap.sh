#!bin/sh
cat /etc/passwd | grep -v "^#" | cut -d ":" -f1 | sed '1d' | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | paste -s -d"," - | sed 's/,/, /g' | sed 's/$/./' | tr -d '\n'
