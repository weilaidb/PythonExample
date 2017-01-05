package org.apache.hadoop.yarn.webapp.test;
import com.google.inject.AbstractModule;
import com.google.inject.Injector;
import com.google.inject.servlet.RequestScoped;
import java.io.PrintWriter;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import org.junit.Test;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
import org.slf4j.LoggerFactory;
import org.slf4j.Logger;
public class TestWebAppTests
