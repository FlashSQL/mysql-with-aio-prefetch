#!/bin/sh

sudo -S rm -rf $1/cscope.files $1/cscope.out

sudo -S find . \( -name '*.c' -o -name '*.cpp' -o -name '*.cc' -o -name '*.h' -o -name '*.s' -o -name '*.S' -o -name '*.ic' -o -name '*.i' \) -print > $1/cscope.files

sudo -S cscope -i $1/cscope.files

