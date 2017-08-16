ldapsearch -x -LLL 'uid=z*' cn | grep 'cn' | cut -f2-10 -d' ' | sort -drf
