package org.apache.hadoop.metrics2.impl;
import java.util.Iterator;
import java.util.List;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.collect.Lists;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.metrics2.MetricsInfo;
import org.apache.hadoop.metrics2.MetricsCollector;
import org.apache.hadoop.metrics2.MetricsFilter;
import static org.apache.hadoop.metrics2.lib.Interns.*;
@InterfaceAudience.Private
@VisibleForTesting
public class MetricsCollectorImpl implements MetricsCollector,
Iterable<MetricsRecordBuilderImpl>
