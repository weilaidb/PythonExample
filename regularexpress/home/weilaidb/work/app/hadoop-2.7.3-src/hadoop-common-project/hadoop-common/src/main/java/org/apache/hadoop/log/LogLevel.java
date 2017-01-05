package org.apache.hadoop.log;
import java.io.*;
import java.net.*;
import java.util.regex.Pattern;
import javax.servlet.*;
import javax.servlet.http.*;
import com.google.common.base.Charsets;
import org.apache.commons.logging.*;
import org.apache.commons.logging.impl.*;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.http.HttpServer2;
import org.apache.hadoop.util.ServletUtil;
@InterfaceStability.Evolving
public class LogLevel
