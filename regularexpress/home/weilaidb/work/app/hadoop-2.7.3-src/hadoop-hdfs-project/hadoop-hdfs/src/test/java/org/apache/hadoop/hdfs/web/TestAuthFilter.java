package org.apache.hadoop.hdfs.web;
import java.util.Collections;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.Map;
import java.util.Properties;
import javax.servlet.FilterConfig;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.security.authentication.server.PseudoAuthenticationHandler;
import org.junit.Assert;
import org.junit.Test;
public class TestAuthFilter
