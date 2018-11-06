cat $1 | grep -i "nicolas\tbauer" | grep "[0123456789]-" | awk '{print $(NF-1)}'
