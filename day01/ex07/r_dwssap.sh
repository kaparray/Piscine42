cat /etc/passwd | cut -d : -f 1 | grep -v "#" | sed n\;d | rev | sort -r | sed -n $FT_LINE1,$FT_LINE2'p' | awk '{printf "%s, ",$0}' | rev | sed 's/,/./' | rev
