package org.apache.hadoop.hdfs.server.namenode;
import java.io.IOException;
import java.io.Closeable;
import static org.apache.hadoop.util.Time.monotonicNow;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public abstract class EditLogOutputStream implements Closeable
