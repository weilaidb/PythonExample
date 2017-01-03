#!/usr/bin/python
# -*- coding: UTF-8 -*-
# 文件名：client.py


import socket

s = socket.socket()
host = socket.gethostname()
port = 12345
s.connect((host,port))
print s.recv(1024)
s.close()
