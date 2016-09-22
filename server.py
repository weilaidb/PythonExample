#!/usr/bin/python
# -*- coding: UTF-8 -*-
# 文件名：server.py

import socket #导入socket模块

s = socket.socket() #创建socket对象
host = socket.gethostname() #获取本机主机名
print "host :", host
port = 12345   #设置端口
s.bind((host,port)) #绑定端口

s.listen(5)   #等待客户端连接

while True:
    c, addr = s.accept()  #建立客户端连接
    print '连接地址 :' , addr
    c.send('欢迎访问菜鸟教程!')
    c.close()  #关闭连接


