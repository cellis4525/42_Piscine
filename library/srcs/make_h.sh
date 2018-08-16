cat ft_* | grep -v "^\t.*" | grep -v "^{.*" | grep -v ".*}$" | grep -v ".*\*/$" | grep -v "^#.*" | sort | sed 's/\(.*)\).*$/\1;/' | uniq > prototypes.h
