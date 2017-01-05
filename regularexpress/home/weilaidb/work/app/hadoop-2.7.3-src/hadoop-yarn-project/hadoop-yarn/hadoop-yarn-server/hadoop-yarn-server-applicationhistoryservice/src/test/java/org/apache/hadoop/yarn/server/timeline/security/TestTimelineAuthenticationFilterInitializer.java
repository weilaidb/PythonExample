package org.apache.hadoop.yarn.server.timeline.security;
import org.junit.Assert;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.http.FilterContainer;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.junit.Test;
import org.mockito.Mockito;
public class TestTimelineAuthenticationFilterInitializer
