#!/usr/bin/env python
# -*- coding: utf-8 -*-
##file function: 提取C CPP文件中的函数名，宏定义，结构体等
##filename:re.py

import re
import sys
import os

tips = "regular expression"
print '-' * 30 + tips + '-' * 30

print 'Number of arguments:', len(sys.argv)
print 'They are:', str(sys.argv)
if (len(sys.argv) > 1):
	filename=str(sys.argv[1])
	print 'filename is ' + filename
	
