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
	# try:
	print filename
	print os.path.dirname(filename)
	print os.path.exists(os.path.dirname(filename))
	if False == os.path.exists(os.path.dirname(filename)):
		os.makedirs(os.path.dirname(filename))
	fw = open(filename,"w")
	fw.write(text)
	fw.close()
	# finally:
		# print "Error:没有找到文件或读取文件失败"
	

###regular expression for header and source files
def regrexheader(text):
	astr = re.sub(r'\s*\/\/.*','', text) ##del //
	astr = re.sub(r'\s*\/\*([\s\S]*?)\*\/', '', astr) ##del /* * in multi line
	astr = re.sub(r'#ifdef\s+__cplusplus([\s\S]*?)#endif', '', astr)  ##del __cplusplus
	astr = re.sub(r'#if 0([\s\S]*?)#endif', '', astr)  ##del  #if 0 ~ #endif
	astr = re.sub(r'\s*#include.*', '', astr)  ##del #include
	astr = re.sub(r'\{([^{]*?)\}', '',astr)  ##del {}
	astr = re.sub(r'\{([^{]*?)\}', '',astr)  ##del {}
	astr = re.sub(r'\{([^{]*?)\}', '',astr)  ##del {}
	astr = re.sub(r'\{([^{]*?)\}', '',astr)  ##del {}
	astr = re.sub(r'\{([^{]*?)\}', '',astr)  ##del {}
	astr = re.sub(r'\{([^{]*?)\}', '',astr)  ##del {}
	astr = re.sub(r'\{([^{]*?)\}', '',astr)  ##del {}
	astr = re.sub(r'\{([^{]*?)\}', '',astr)  ##del {}
	astr = re.sub(r'\{([^{]*?)\}', '',astr)  ##del {}
	astr = re.sub(r'\{([^{]*?)\}', '',astr)  ##del {}
	astr = re.sub(r'\{([^{]*?)\}', '',astr)  ##del {}
	astr = re.sub(r'\{([^{]*?)\}', '',astr)  ##del {}
	astr = re.sub(r'\{([^{]*?)\}', '',astr)  ##del {}
	astr = re.sub(r'\{([^{]*?)\}', '',astr)  ##del {}	
	astr = re.sub(r'#pragma.*', '', astr)  ##del 
	astr = re.sub(r'\s*#endif', '', astr)  ##del 
	astr = re.sub(r'\s*#ifndef.*', '', astr)  ##del 
	astr = re.sub(r'\s*#ifdef.*', '', astr)  ##del 
	astr = re.sub(r'\s*#else', '', astr)  ##del 
	# print astr
	return astr
	
def delete(filepath):
	f = open(filepath, 'a+')
	fnew = open(filepath + '.re.txt','wb')
	for line in f.readlines():
		data = line.strip()
		if len(data) != 0:
			fnew.write(data)
			fnew.write('\n')
	f.close()
	fnew.close()
	
	
	
	
if __name__=="__main__":
	
	print '=' * 3 + "begin" + '=' * 3
	str=""
	savedir="regularexpress/"
	savefilename="abc.txt"
	if (len(sys.argv) > 1):
		str = openfilereturncontent(sys.argv[1])
		print "file[%s] content:" % (sys.argv[1])
		savefilename = savedir + os.path.realpath(sys.argv[1])
	# print str
	text = regrexheader(str)
	print '-' *100
	print "deal result:" + text
	
	writefilewithcontent(savefilename, text)
	delete(savefilename)
	os.remove(savefilename)
	
	print '=' * 3 + "end" + '=' * 3
	


