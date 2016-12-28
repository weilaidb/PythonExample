#!/usr/bin/env python
# -*- coding: utf-8 -*-
##filename:re.py

import re
import sys
import os

tips = "regular expression"
print '-' * 30 + tips + '-' * 30

print 'numbers of argument', len(sys.argv)
print 'They are', str(sys.argv)


if (len(sys.argv) > 1):
	filename=str(sys.argv[1])
	print 'filename is ' + filename
	
###open and read file
def openfilereturncontent(filename):
	try:
		fh = open(filename, "r")
		filecontent = fh.read()
		fh.close()
		return filecontent
	finally:
		print "Error:没有找到文件或读取文件失败"
	

def writefilewithcontent(filename, text):
	try:
		print filename
		print os.path.dirname(filename)
		print os.path.exists(os.path.dirname(filename))
		if False == os.path.exists(os.path.dirname(filename)):
			os.makedirs(os.path.dirname(filename))
		fw = open(filename,"w")
		fw.write(text)
		fw.close()
	finally:
		print "Error:没有找到文件或读取文件失败"
	

###regular expression for header and source files
def regrexheader(text):
	#m = re.match(r'\s+', text)
	astr = re.sub(r'\s*#include.*', '', text)  ##del #include
	astr = re.sub(r'\s*\/\*.*\*\/', '', astr)  ##del /*  */ in a line
	astr = re.sub(r'\s*\/\/.*', '', astr)  ##del //
	astr = re.sub(r'\s*\/\*([\s\S]*?)\*\/', '', astr)  ##del /*  */  in many lines
	astr = re.sub(r'#ifdef\s+__cplusplus([\s\S]*?)#endif', '', astr)  ##del __cplusplus
	astr = re.sub(r'#if 0([\s\S]*?)#endif', '', astr)  ##del 
	astr = re.sub(r'#pragma.*', '', astr)  ##del 
	astr = re.sub(r'\s*#endif', '', astr)  ##del 
	astr = re.sub(r'\s*#else', '', astr)  ##del 
	astr = re.sub(r'\s*#ifndef.*', '', astr)  ##del 
	astr = re.sub(r'\s*#ifdef.*', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'\{([@/^\'\?\~#（|，）*\/\\\-:&\[\]|+;->_$<%",!\w\d<=().、\n\s]*)\}', '', astr)  ##del 
	astr = re.sub(r'', '', astr)  ##del 
	print astr
	return astr
	
def delete(filepath):
	f = open(filepath)
	fnew = open(filepath + '.re.txt','wb')
	for line in f.readline():
		data = line.strip()
		if len(data) != 0:
			fnew.write(data)
			fnew.write('\n')
	f.close()
	fnew.close()
	
	
	
	
if __name__=="__main__":
	
	print '-' * 10 + "begin" + '-' * 10
	str=""
	savedir="regularexpress"
	savefilename="abc.txt"
	if (len(sys.argv) > 1):
		str = openfilereturncontent(sys.argv[1])
		print "file[%s] content:" % (sys.argv[1])
		savefilename = savedir + sys.argv[1]
	print str
	text = regrexheader(str)
	
	writefilewithcontent(savefilename, text)
	delete(savefilename)
	os.remove(savefilename)
	
	print '-' * 10 + "end" + '-' * 10
	


