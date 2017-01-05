package org.apache.hadoop.ipc;
import static org.junit.Assert.assertEquals;
import org.junit.Test;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import static org.apache.hadoop.ipc.WeightedRoundRobinMultiplexer.IPC_CALLQUEUE_WRRMUX_WEIGHTS_KEY;
public class TestWeightedRoundRobinMultiplexer
