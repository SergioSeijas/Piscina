#!/bin/sh
cat /etc/passwd | grep -v '^#' | awk -F ':' '{print $1}' | awk 'NR%2==0' | rev | sort -r | awk -v L1="$FT_LINE1" -v L2="$FT_LINE2" 'NR>=L1 && NR<=L2' | paste -s -d ',' - | sed 's/,/, /g' | sed 's/$/./' | tr -d '\n'
