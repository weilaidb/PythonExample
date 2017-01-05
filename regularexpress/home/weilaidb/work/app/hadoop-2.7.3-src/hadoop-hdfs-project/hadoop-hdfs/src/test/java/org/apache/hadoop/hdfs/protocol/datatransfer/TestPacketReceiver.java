package org.apache.hadoop.hdfs.protocol.datatransfer;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.nio.ByteBuffer;
import org.apache.hadoop.hdfs.AppendTestUtil;
import org.junit.Test;
import org.mockito.Mockito;
import com.google.common.primitives.Ints;
import static org.junit.Assert.*;
public class TestPacketReceiver
