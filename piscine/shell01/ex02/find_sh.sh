#!/bin/sh
find . -type f -name '*.sh' -ls | awk -F '/' '{print $NF}' | sed 's/\(.*\).sh/\1/'
