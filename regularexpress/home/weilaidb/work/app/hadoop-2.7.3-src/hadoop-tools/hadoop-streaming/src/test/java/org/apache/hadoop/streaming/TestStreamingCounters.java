package org.apache.hadoop.streaming;
import org.junit.Test;
import static org.junit.Assert.*;
import java.io.IOException;
import org.apache.hadoop.mapred.Counters;
import org.apache.hadoop.mapred.Counters.Counter;
import org.apache.hadoop.mapred.Counters.Group;
public class TestStreamingCounters extends TestStreaming
