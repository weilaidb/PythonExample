package org.apache.hadoop.fs.azure.metrics;
import java.util.UUID;
import java.util.concurrent.atomic.AtomicLong;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.metrics2.MetricsCollector;
import org.apache.hadoop.metrics2.MetricsInfo;
import org.apache.hadoop.metrics2.MetricsSource;
import org.apache.hadoop.metrics2.annotation.Metrics;
import org.apache.hadoop.metrics2.lib.MetricsRegistry;
import org.apache.hadoop.metrics2.lib.MutableCounterLong;
import org.apache.hadoop.metrics2.lib.MutableGaugeLong;
@Metrics(about="Metrics for WASB", context="azureFileSystem")
@InterfaceAudience.Public
@InterfaceStability.Evolving
public final class AzureFileSystemInstrumentation implements MetricsSource
