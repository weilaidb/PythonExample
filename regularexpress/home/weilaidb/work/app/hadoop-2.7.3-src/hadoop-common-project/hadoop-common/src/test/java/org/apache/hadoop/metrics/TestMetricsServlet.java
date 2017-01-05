package org.apache.hadoop.metrics;
import java.io.IOException;
import java.io.PrintWriter;
import java.io.StringWriter;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import junit.framework.TestCase;
import org.apache.hadoop.metrics.MetricsServlet.TagsMetricsPair;
import org.apache.hadoop.metrics.spi.NoEmitMetricsContext;
import org.apache.hadoop.metrics.spi.OutputRecord;
import org.mortbay.util.ajax.JSON;
public class TestMetricsServlet extends TestCase
