package org.apache.hadoop.io;
import java.io.*;
import java.util.*;
import junit.framework.TestCase;
import org.apache.commons.logging.*;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.io.SequenceFile.CompressionType;
import org.apache.hadoop.io.SequenceFile.Metadata;
import org.apache.hadoop.io.compress.CompressionCodec;
import org.apache.hadoop.io.compress.DefaultCodec;
import org.apache.hadoop.io.serializer.avro.AvroReflectSerialization;
import org.apache.hadoop.util.ReflectionUtils;
import org.apache.hadoop.conf.*;
import org.mockito.Mockito;
public class TestSequenceFile extends TestCase
