package org.apache.hadoop.lib.servlet;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.lib.service.FileSystemAccess;
import javax.servlet.Filter;
import javax.servlet.FilterChain;
import javax.servlet.FilterConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import java.io.IOException;
@InterfaceAudience.Private
public abstract class FileSystemReleaseFilter implements Filter
