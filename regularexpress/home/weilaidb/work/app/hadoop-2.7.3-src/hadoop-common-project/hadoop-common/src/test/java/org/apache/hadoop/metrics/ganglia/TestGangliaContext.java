package org.apache.hadoop.metrics.ganglia;
import org.junit.Test;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import org.apache.hadoop.metrics.ContextFactory;
import org.apache.hadoop.metrics.spi.AbstractMetricsContext;
import java.net.MulticastSocket;
public class TestGangliaContext
