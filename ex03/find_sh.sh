#!/bin/sh
find . -type f -name '*.sh' | cut -f 1 -d '.sh'
