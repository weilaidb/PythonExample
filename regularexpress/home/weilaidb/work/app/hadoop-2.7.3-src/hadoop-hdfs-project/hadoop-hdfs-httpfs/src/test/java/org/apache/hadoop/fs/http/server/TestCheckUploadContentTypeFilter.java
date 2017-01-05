package org.apache.hadoop.fs.http.server;
import javax.servlet.Filter;
import javax.servlet.FilterChain;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import org.apache.hadoop.fs.http.client.HttpFSFileSystem;
import org.junit.Test;
import org.mockito.Mockito;
public class TestCheckUploadContentTypeFilter
