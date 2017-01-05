package org.apache.hadoop.log;
import java.io.*;
import java.net.*;
import org.apache.hadoop.http.HttpServer2;
import org.apache.hadoop.net.NetUtils;
import junit.framework.TestCase;
import org.apache.commons.logging.*;
import org.apache.commons.logging.impl.*;
import org.apache.log4j.*;
public class TestLogLevel extends TestCase
