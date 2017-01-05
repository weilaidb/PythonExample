package org.apache.hadoop.metrics2.sink.ganglia;
import java.io.IOException;
import java.net.*;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.apache.commons.configuration.SubsetConfiguration;
import org.apache.commons.io.Charsets;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.metrics2.MetricsSink;
import org.apache.hadoop.metrics2.util.Servers;
import org.apache.hadoop.net.DNS;
public abstract class AbstractGangliaSink implements MetricsSink
