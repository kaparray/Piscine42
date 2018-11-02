ldapsearch -LLL -Q uid="z*" cn | grep -v '^$' | awk 'NR % 2 == 0' | sort -r -f | cut -d : -f 2
