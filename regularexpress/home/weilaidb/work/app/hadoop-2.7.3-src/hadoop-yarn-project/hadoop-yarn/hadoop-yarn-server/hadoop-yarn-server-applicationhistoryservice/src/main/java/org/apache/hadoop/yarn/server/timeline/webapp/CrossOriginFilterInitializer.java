package org.apache.hadoop.yarn.server.timeline.webapp;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.http.FilterContainer;
import org.apache.hadoop.security.HttpCrossOriginFilterInitializer;
import org.apache.hadoop.security.http.CrossOriginFilter;
import java.util.Map;
public class CrossOriginFilterInitializer extends HttpCrossOriginFilterInitializer
