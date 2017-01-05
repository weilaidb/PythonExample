package org.apache.hadoop.io.serializer;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.junit.Test;
import static org.junit.Assert.assertNull;
import static org.junit.Assert.assertNotNull;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.Writable;
public class TestSerializationFactory
