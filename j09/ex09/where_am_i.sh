ipconfig | if grep -q 'IPv4'; then 
ipconfig | grep 'IPv4' | grep -o '[[:digit:]]*[.][[:digit:]]*[.][[:digit:]]*[.][[:digit:]]*'
else echo "Je suis perdu!"
fi
