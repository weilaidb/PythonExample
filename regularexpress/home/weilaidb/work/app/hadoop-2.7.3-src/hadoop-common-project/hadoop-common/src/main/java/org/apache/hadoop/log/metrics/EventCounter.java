package org.apache.hadoop.log.metrics;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.log4j.AppenderSkeleton;
import org.apache.log4j.Level;
import org.apache.log4j.spi.LoggingEvent;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class EventCounter extends AppenderSkeleton
