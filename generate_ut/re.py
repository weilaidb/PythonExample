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
	fh = open(filename, "r")
	filecontent = fh.read()
	fh.close()
	return filecontent


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
	
def f2(m2):
	d = m2.groupdict()
	# return d['functionname']
	# wholefunc= d['functype']  +  " " + d['functionname'] +  "(" + d['paramterlist']  +  ")";
	funcname=d['functionname']
	return funcname

def f3(m2):
	d = m2.groupdict()
	# return d['functionname']
	wholefunc= d['functype']  +  " " + d['functionname'] +  "(" + d['paramterlist']  +  ")";
	# funcname=d['functionname']
	return wholefunc 

	
def f4(m2):
	d = m2.groupdict()
	# return d['functionname']
	wholefunc= d['functype']  +  " " + d['functionname'] +  "(" + d['paramterlist']  +  ")";
	funcname=d['functionname']
	# funcname=d['functionname']
	astr = funcname
	astr = re.sub(r':', '_', astr)  ##del  #if
	astr = re.sub(r'~', '__', astr)  ##del  #if
	
	lastfunc = "void ut_" + astr + "()\n{\n\n" \
			+ "\t//" + wholefunc + ";"  \
			+  "\n\t//assert(1);" \
			+  "\n\t//assert(1);\n" \
			+  "\n\n}" \
			+  ''
			
	return lastfunc 
	# return funcname 

	
	

	
###regular expression for header and source files
def regrexheader(text):
	p = re.compile(r'(?P<functype>(.*[\w&*]+\s+))(?P<functionname>([\w:*&~]+))\((?P<paramterlist>([\s\S]*?))\)')
	astr = text
	astr = re.sub(r'\s*\/\*([\s\S]*?)\*\/', '', astr) ##del /* * in multi line
	astr = re.sub(r'\/\/.*','', astr) ##del //
	for i in range(1,40):
		astr = re.sub(r'\".*?"', '',astr)  ##del ""
	for i in range(1,50):
		astr = re.sub(r'\{([^{]*?)\}', '',astr)  ##del {}
	astr = re.sub(r'#ifdef\s+__cplusplus([\s\S]*?)#endif', '', astr)  ##del __cplusplus
	astr = re.sub(r'#if 0([\s\S]*?)#endif', '', astr)  ##del  #if 0 ~ #endif
	# astr = re.sub(r'\s*#if.*', '', astr)  ##del  #if
	astr = re.sub(r'\s*#include.*', '', astr)  ##del #include
	# # astr = re.sub(r'"(.*)"', '',astr)  ##del "   "
	astr = re.sub(r'.*using.*', '',astr)  ##using... 
	astr = re.sub(r'#pragma.*', '', astr)  ##del 
	# astr = re.sub(r'\s*#endif', '', astr)  ##del 
	# astr = re.sub(r'\s*#ifndef.*', '', astr)  ##del 
	# astr = re.sub(r'\s*#ifdef.*', '', astr)  ##del 
	# astr = re.sub(r'\s*#else', '', astr)  ##del 
	astr = re.sub(r'\s*#define.*', '', astr)  ##del  define
	astr = re.sub(r'\s*enum[\s\S]*?;', '', astr)  ##del  define
	astr = re.sub(r'\n+', '\n', astr)  ##del  multispace line
	
	
	# funcnames = p.sub(f2,astr)   ##提取函数信息   效率高
	# wholefunc = p.sub(f3,astr)   ##提取函数信息   效率高
	result = p.sub(f4,astr)   ##提取函数信息   效率高
	# astr = re.sub(r'\s*.*;.*', '', astr)  ##del  ;

	# print astr
	# return [funcnames, wholefunc]
	return result
	
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
		# savefilename = savedir + os.path.realpath(sys.argv[1])
		savefilename = savedir + os.path.dirname(sys.argv[1]) + "/ut_" + os.path.basename(sys.argv[1])
	# print str
	# text = regrexheader(str)
	# [funcnames, wholefunc] =  regrexheader(str)
	text =  regrexheader(str)
	# text = re.sub(r'\n', '\n\n', text)  ##add  multispace line
	# text = funcnames
	print '-' *100
	print "deal result:" + text
	# # 方法2
	# for i in range(len(funcnames)):
		# print ("序号：%s   值：%s" % (i + 1, funcnames[i]))
	
	
	writefilewithcontent(savefilename, text)
	delete(savefilename)
	os.remove(savefilename)
	os.rename(savefilename +'.re.txt', savefilename)
	
	print '=' * 3 + "end" + '=' * 3
	


