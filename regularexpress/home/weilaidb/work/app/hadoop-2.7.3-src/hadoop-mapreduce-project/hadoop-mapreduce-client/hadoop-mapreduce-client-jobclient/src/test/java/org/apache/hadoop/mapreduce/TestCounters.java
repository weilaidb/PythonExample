package org.apache.hadoop.mapreduce;
import java.util.Random;
import org.junit.Test;
import static org.junit.Assert.*;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.mapreduce.counters.LimitExceededException;
import org.apache.hadoop.mapreduce.counters.Limits;
public class TestCounters
