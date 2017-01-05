package org.apache.hadoop.mapreduce.v2.hs.webapp;
import static org.junit.Assert.assertEquals;
import java.net.URI;
import java.net.URISyntaxException;
import org.apache.hadoop.mapreduce.v2.jobhistory.JHAdminConfig;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.junit.Test;
public class TestMapReduceTrackingUriPlugin
