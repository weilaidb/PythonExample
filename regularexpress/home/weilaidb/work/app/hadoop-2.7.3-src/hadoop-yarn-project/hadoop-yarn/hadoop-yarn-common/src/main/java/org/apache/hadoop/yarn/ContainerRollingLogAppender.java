package org.apache.hadoop.yarn;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.log4j.RollingFileAppender;
import java.io.File;
import java.io.Flushable;
@Public
@Unstable
public class ContainerRollingLogAppender extends RollingFileAppender
implements Flushable
