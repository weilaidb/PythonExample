package org.apache.hadoop.metrics;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.http.HttpServer2;
import org.apache.hadoop.metrics.spi.OutputRecord;
import org.apache.hadoop.metrics.spi.AbstractMetricsContext.MetricMap;
import org.apache.hadoop.metrics.spi.AbstractMetricsContext.TagMap;
import org.mortbay.util.ajax.JSON;
import org.mortbay.util.ajax.JSON.Output;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class MetricsServlet extends HttpServlet
