package org.apache.hadoop.util;
import java.io.*;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.Calendar;
import javax.servlet.*;
import javax.servlet.http.HttpServletRequest;
import org.apache.commons.httpclient.URIException;
import org.apache.commons.httpclient.util.URIUtil;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class ServletUtil
