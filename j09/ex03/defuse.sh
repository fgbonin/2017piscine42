result=$(stat --format '%X' bomb.txt); echo "$result - 1" | bc
