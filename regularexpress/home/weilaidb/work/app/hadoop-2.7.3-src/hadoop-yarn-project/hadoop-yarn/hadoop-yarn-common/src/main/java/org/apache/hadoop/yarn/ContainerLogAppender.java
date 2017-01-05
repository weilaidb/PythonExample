package org.apache.hadoop.yarn;
import java.io.File;
import java.io.Flushable;
import java.util.LinkedList;
import java.util.Queue;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.log4j.FileAppender;
import org.apache.log4j.spi.LoggingEvent;
@Public
@Unstable
public class ContainerLogAppender extends FileAppender
implements Flushable
