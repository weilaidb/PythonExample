package org.apache.hadoop.mapreduce;
import java.io.IOException;
import java.net.URI;
import java.security.PrivilegedExceptionAction;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configuration.IntegerRanges;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.RawComparator;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapreduce.filecache.DistributedCache;
import org.apache.hadoop.mapreduce.protocol.ClientProtocol;
import org.apache.hadoop.mapreduce.task.JobContextImpl;
import org.apache.hadoop.mapreduce.util.ConfigUtil;
import org.apache.hadoop.util.StringUtils;
import org.apache.hadoop.yarn.api.records.ReservationId;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class Job extends JobContextImpl implements JobContext
