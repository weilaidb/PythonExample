package org.apache.hadoop.io.serializer;
import java.io.Serializable;
import org.apache.hadoop.io.DataInputBuffer;
import org.apache.hadoop.io.DataOutputBuffer;
import static org.apache.hadoop.io.TestGenericWritable.CONF_TEST_KEY;
import static org.apache.hadoop.io.TestGenericWritable.CONF_TEST_VALUE;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.TestGenericWritable.Baz;
import org.apache.hadoop.io.TestGenericWritable.FooGenericWritable;
import org.apache.hadoop.io.WritableComparator;
import org.junit.Test;
import static org.junit.Assert.*;
public class TestWritableSerialization
