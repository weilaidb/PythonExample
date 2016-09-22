#!/usr/bin/python
# -*- coding: UTF-8 -*-
# 文件名：SMTP.py

import smtplib
from email.mime.text import MIMEText
from email.header import Header


sender = 'wxjlmr@126.com'
receivers = ['wxjlmr@126.com']

message = MIMEText('Python邮件发送测试...', 'plain', 'utf-8')
message['From'] = Header("菜鸟教程", 'utf-8')
message['To'] = Header("测试", 'utf-8')

subject = 'Python SMTP 邮件测试'
message['Subject'] = Header(subject, 'utf-8')

try:
    smtpObj = smtplib.SMTP('localhost')
    smtpObj.sendmail(sender, receivers, message.as_string())
    print "邮件发送成功"
except smtplib.SMTPException:
    print "Error:无法发送邮件"

