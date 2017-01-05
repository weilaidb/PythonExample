package org.apache.hadoop.hdfs.server.namenode.startupprogress;
import static org.apache.hadoop.util.Time.monotonicNow;
import java.util.EnumSet;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ConcurrentMap;
import org.apache.hadoop.classification.InterfaceAudience;
@InterfaceAudience.Private
public class StartupProgress
