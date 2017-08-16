cat /etc/passwd | grep -ve '#' | awk 'NR % 2 == 0' | cut -d : -f 1 | rev | sort -r | awk "(NR >= $FT_LINE1) && (NR <= $FT_LINE2)" | sed -e 's/$/, /' -e '$ s/, /./' | tr -d '\n'
