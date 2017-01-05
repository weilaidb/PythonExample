package org.apache.hadoop.hdfs.server.namenode;
import com.google.common.collect.Lists;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.inotify.Event;
import org.apache.hadoop.hdfs.inotify.EventBatch;
import org.apache.hadoop.hdfs.protocol.Block;
import java.util.List;
@InterfaceAudience.Private
public class InotifyFSEditLogOpTranslator
