package org.apache.hadoop.ipc;
import java.util.concurrent.atomic.AtomicInteger;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
public class WeightedRoundRobinMultiplexer implements RpcMultiplexer
