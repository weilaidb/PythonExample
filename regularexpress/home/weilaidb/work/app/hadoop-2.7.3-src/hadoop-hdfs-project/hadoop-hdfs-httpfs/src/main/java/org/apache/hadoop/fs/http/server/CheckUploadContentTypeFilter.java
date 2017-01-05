package org.apache.hadoop.fs.http.server;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.http.client.HttpFSFileSystem;
import org.apache.hadoop.util.StringUtils;
import javax.servlet.Filter;
import javax.servlet.FilterChain;
import javax.servlet.FilterConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.util.HashSet;
import java.util.Set;
@InterfaceAudience.Private
public class CheckUploadContentTypeFilter implements Filter
