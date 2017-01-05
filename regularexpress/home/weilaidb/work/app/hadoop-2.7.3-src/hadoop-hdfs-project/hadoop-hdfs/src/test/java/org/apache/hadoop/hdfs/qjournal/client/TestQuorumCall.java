package org.apache.hadoop.hdfs.qjournal.client;
import static org.junit.Assert.*;
import java.util.Map;
import java.util.TreeMap;
import java.util.concurrent.TimeoutException;
import org.apache.hadoop.hdfs.qjournal.client.QuorumCall;
import org.junit.Test;
import com.google.common.base.Joiner;
import com.google.common.collect.ImmutableMap;
import com.google.common.util.concurrent.SettableFuture;
public class TestQuorumCall
