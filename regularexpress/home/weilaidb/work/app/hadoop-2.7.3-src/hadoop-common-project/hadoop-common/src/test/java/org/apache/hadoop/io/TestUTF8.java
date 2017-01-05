package org.apache.hadoop.io;
import junit.framework.TestCase;
import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.IOException;
import java.io.UTFDataFormatException;
import java.nio.ByteBuffer;
import java.util.Random;
import org.apache.hadoop.test.GenericTestUtils;
import org.apache.hadoop.util.StringUtils;
@SuppressWarnings("deprecation")
public class TestUTF8 extends TestCase
