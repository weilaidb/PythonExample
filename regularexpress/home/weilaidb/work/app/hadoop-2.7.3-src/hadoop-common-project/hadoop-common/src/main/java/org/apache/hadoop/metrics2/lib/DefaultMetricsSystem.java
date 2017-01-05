package org.apache.hadoop.metrics2.lib;
import java.util.concurrent.atomic.AtomicReference;
import javax.management.ObjectName;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.metrics2.MetricsException;
import org.apache.hadoop.metrics2.MetricsSystem;
import org.apache.hadoop.metrics2.impl.MetricsSystemImpl;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public enum DefaultMetricsSystem
