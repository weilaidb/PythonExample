package org.apache.hadoop.hdfs;
import com.google.common.collect.Iterators;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.inotify.EventBatch;
import org.apache.hadoop.hdfs.inotify.EventBatchList;
import org.apache.hadoop.hdfs.inotify.MissingEventsException;
import org.apache.hadoop.hdfs.protocol.ClientProtocol;
import org.apache.hadoop.util.Time;
import org.apache.htrace.Sampler;
import org.apache.htrace.Trace;
import org.apache.htrace.TraceScope;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import java.io.IOException;
import java.util.Iterator;
import java.util.Random;
import java.util.concurrent.TimeUnit;
@InterfaceAudience.Public
@InterfaceStability.Unstable
public class DFSInotifyEventInputStream
