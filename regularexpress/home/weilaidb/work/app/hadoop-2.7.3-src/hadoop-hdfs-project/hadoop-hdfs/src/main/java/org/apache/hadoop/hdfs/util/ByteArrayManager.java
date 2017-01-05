package org.apache.hadoop.hdfs.util;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;
import java.util.Queue;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.HadoopIllegalArgumentException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.util.Time;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public abstract class ByteArrayManager
