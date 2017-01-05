package org.apache.hadoop.metrics.spi;
import java.util.LinkedHashMap;
import java.util.Map;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.metrics.MetricsException;
import org.apache.hadoop.metrics.MetricsRecord;
import org.apache.hadoop.metrics.spi.AbstractMetricsContext.TagMap;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class MetricsRecordImpl implements MetricsRecord
