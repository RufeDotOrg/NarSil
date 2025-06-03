#!/usr/bin/bash
mkdir -p bin /
clang narsil.c -O0 -g1 -I. -fno-omit-frame-pointer -ferror-limit=3 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type -lncursesw -ltinfo -DTEST_OVERRIDE_PATHS -DHAVE_CONFIG_H -D_DEFAULT_SOURCE -D_XOPEN_SOURCE=600 -Isrc -o bin/narsil
