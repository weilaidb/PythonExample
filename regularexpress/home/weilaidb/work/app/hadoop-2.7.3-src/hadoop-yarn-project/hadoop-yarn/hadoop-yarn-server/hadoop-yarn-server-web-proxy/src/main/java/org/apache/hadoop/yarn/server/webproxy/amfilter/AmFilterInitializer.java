package org.apache.hadoop.yarn.server.webproxy.amfilter;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.http.FilterContainer;
import org.apache.hadoop.http.FilterInitializer;
import org.apache.hadoop.yarn.api.ApplicationConstants;
import org.apache.hadoop.yarn.webapp.util.WebAppUtils;
import com.google.common.annotations.VisibleForTesting;
public class AmFilterInitializer extends FilterInitializer
