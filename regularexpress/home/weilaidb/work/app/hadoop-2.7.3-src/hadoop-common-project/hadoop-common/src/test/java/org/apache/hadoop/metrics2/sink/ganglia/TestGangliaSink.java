package org.apache.hadoop.metrics2.sink.ganglia;
import org.apache.commons.configuration.SubsetConfiguration;
import org.apache.hadoop.metrics2.impl.ConfigBuilder;
import org.junit.Test;
import java.net.DatagramSocket;
import java.net.MulticastSocket;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
public class TestGangliaSink
