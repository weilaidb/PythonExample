package org.apache.hadoop.fs.azure.metrics;
import static org.apache.hadoop.fs.azure.metrics.AzureFileSystemInstrumentation.WASB_BYTES_READ;
import static org.apache.hadoop.fs.azure.metrics.AzureFileSystemInstrumentation.WASB_BYTES_WRITTEN;
import static org.apache.hadoop.fs.azure.metrics.AzureFileSystemInstrumentation.WASB_RAW_BYTES_DOWNLOADED;
import static org.apache.hadoop.fs.azure.metrics.AzureFileSystemInstrumentation.WASB_RAW_BYTES_UPLOADED;
import static org.apache.hadoop.fs.azure.metrics.AzureFileSystemInstrumentation.WASB_WEB_RESPONSES;
import static org.apache.hadoop.test.MetricsAsserts.getLongCounter;
import static org.apache.hadoop.test.MetricsAsserts.getLongGauge;
import static org.apache.hadoop.test.MetricsAsserts.getMetrics;
public final class AzureMetricsTestUtil
