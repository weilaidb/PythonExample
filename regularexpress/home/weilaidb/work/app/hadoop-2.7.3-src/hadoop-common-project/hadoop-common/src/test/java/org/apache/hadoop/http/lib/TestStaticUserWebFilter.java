package org.apache.hadoop.http.lib;
import static org.junit.Assert.*;
import static org.mockito.Mockito.mock;
import javax.servlet.FilterChain;
import javax.servlet.FilterConfig;
import javax.servlet.ServletResponse;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletRequestWrapper;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.http.lib.StaticUserWebFilter.StaticUserFilter;
import org.junit.Test;
import org.mockito.ArgumentCaptor;
import org.mockito.Mockito;
public class TestStaticUserWebFilter
