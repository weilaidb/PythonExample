#!/bin/sh
# Test for gcc 'asm goto' suport
# Copyright (C) 2010, Jason Baron <jbaron@redhat.com>
echo "int main(void) " | $@ -x c - -c -o /dev/null >/dev/null 2>&1 && echo "y"
