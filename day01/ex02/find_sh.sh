find . -type f -name '*.sh' 2>/dev/null -exec basename "{}"  \; |rev | cut -c 4- | rev
