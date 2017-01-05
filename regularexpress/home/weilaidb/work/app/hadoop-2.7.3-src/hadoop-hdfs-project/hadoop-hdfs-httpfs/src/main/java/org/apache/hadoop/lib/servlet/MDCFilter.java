package org.apache.hadoop.lib.servlet;
import org.apache.hadoop.classification.InterfaceAudience;
import org.slf4j.MDC;
import javax.servlet.Filter;
import javax.servlet.FilterChain;
import javax.servlet.FilterConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.http.HttpServletRequest;
import java.io.IOException;
import java.security.Principal;
@InterfaceAudience.Private
public class MDCFilter implements Filter
