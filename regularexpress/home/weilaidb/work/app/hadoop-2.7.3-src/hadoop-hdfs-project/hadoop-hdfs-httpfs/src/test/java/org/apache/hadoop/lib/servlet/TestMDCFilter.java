package org.apache.hadoop.lib.servlet;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNull;
import static org.junit.Assert.assertTrue;
import java.io.IOException;
import java.security.Principal;
import java.util.concurrent.atomic.AtomicBoolean;
import javax.servlet.Filter;
import javax.servlet.FilterChain;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.http.HttpServletRequest;
import org.apache.hadoop.test.HTestCase;
import org.junit.Test;
import org.mockito.Mockito;
import org.slf4j.MDC;
public class TestMDCFilter extends HTestCase
