package org.apache.hadoop.mapreduce.v2.hs.webapp;
import java.net.URI;
import java.net.URISyntaxException;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapreduce.v2.util.MRWebAppUtil;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.util.TrackingUriPlugin;
public class MapReduceTrackingUriPlugin extends TrackingUriPlugin implements
Configurable
