package org.apache.hadoop.mapred;
import java.io.Flushable;
import java.util.LinkedList;
import java.util.Queue;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.log4j.FileAppender;
import org.apache.log4j.spi.LoggingEvent;
@InterfaceStability.Unstable
public class TaskLogAppender extends FileAppender implements Flushable
