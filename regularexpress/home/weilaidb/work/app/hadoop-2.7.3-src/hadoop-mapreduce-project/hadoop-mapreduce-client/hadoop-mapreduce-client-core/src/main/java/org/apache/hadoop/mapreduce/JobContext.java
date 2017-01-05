package org.apache.hadoop.mapreduce;
import java.io.IOException;
import java.net.URI;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configuration.IntegerRanges;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.RawComparator;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.security.Credentials;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public interface JobContext extends MRJobConfig
