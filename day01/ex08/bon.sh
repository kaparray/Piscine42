ldapsearch -xLLL cn="*bon*" sn | grep "sn: " | wc -l | tr -d " "
