#!/usr/bin/env python
# -*- coding: utf-8 -*-

import os
import sys

print 'os.getcwd()=',os.getcwd()
print 'sys.argv=',sys.argv
print 'sys.argv[0]=',sys.argv[0]
print 'os.path.realpath(sys.argv[0])=',os.path.realpath(sys.argv[0])
print 'os.path.split( os.path.realpath( sys.argv[0] ) )=',os.path.split( os.path.realpath( sys.argv[0] ) )
print 'os.path.split( os.path.realpath( sys.argv[0] ) )[0]=',os.path.split( os.path.realpath( sys.argv[0] ) )[0]
