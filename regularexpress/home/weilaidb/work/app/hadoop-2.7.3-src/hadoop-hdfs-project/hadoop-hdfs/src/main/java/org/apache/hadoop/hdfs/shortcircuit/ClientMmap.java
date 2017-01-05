package org.apache.hadoop.hdfs.shortcircuit;
import org.apache.hadoop.classification.InterfaceAudience;
import java.io.Closeable;
import java.nio.MappedByteBuffer;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
@InterfaceAudience.Private
public class ClientMmap implements Closeable
