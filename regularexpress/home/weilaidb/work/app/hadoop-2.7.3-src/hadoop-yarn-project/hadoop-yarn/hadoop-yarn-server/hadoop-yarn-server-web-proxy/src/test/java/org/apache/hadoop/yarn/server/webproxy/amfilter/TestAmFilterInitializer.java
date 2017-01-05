package org.apache.hadoop.yarn.server.webproxy.amfilter;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import junit.framework.TestCase;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.http.FilterContainer;
import org.apache.hadoop.http.HttpConfig;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.webapp.util.WebAppUtils;
import org.junit.Test;
public class TestAmFilterInitializer extends TestCase
