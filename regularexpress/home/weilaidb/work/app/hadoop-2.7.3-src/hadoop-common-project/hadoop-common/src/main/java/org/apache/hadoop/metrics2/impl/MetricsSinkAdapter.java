package org.apache.hadoop.metrics2.impl;
import java.io.Closeable;
import java.util.Random;
import java.util.concurrent.*;
import static com.google.common.base.Preconditions.*;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.metrics2.lib.MutableGaugeInt;
import org.apache.hadoop.metrics2.lib.MetricsRegistry;
import org.apache.hadoop.metrics2.lib.MutableCounterInt;
import org.apache.hadoop.metrics2.lib.MutableStat;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
import static org.apache.hadoop.metrics2.util.Contracts.*;
import org.apache.hadoop.metrics2.MetricsFilter;
import org.apache.hadoop.metrics2.MetricsSink;
import org.apache.hadoop.util.Time;
class MetricsSinkAdapter implements SinkQueue.Consumer<MetricsBuffer>
