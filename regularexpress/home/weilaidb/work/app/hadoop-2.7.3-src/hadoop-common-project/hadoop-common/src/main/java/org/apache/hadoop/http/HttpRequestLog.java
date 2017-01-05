package org.apache.hadoop.http;
import java.util.HashMap;
import org.apache.commons.logging.impl.Log4JLogger;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogConfigurationException;
import org.apache.commons.logging.LogFactory;
import org.apache.log4j.Appender;
import org.apache.log4j.Logger;
import org.mortbay.jetty.NCSARequestLog;
import org.mortbay.jetty.RequestLog;
public class HttpRequestLog
