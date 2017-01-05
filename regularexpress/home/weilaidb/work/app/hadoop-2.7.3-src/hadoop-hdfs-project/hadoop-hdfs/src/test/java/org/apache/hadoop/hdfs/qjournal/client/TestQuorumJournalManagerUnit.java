package org.apache.hadoop.hdfs.qjournal.client;
import static org.junit.Assert.fail;
import static org.mockito.Matchers.anyLong;
import static org.mockito.Matchers.eq;
import java.io.IOException;
import java.net.URI;
import java.util.List;
import org.junit.Assert;
import org.apache.commons.logging.impl.Log4JLogger;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.qjournal.client.AsyncLogger;
import org.apache.hadoop.hdfs.qjournal.client.QuorumException;
import org.apache.hadoop.hdfs.qjournal.client.QuorumJournalManager;
import org.apache.hadoop.hdfs.qjournal.protocol.QJournalProtocolProtos.GetJournalStateResponseProto;
import org.apache.hadoop.hdfs.qjournal.protocol.QJournalProtocolProtos.NewEpochResponseProto;
import org.apache.hadoop.hdfs.server.namenode.EditLogOutputStream;
import org.apache.hadoop.hdfs.server.namenode.NameNodeLayoutVersion;
import org.apache.hadoop.hdfs.server.protocol.NamespaceInfo;
import org.apache.hadoop.test.GenericTestUtils;
import org.apache.log4j.Level;
import org.junit.Before;
import org.junit.Test;
import org.mockito.Mockito;
import org.mockito.stubbing.Stubber;
import com.google.common.collect.ImmutableList;
import com.google.common.util.concurrent.Futures;
import com.google.common.util.concurrent.ListenableFuture;
import com.google.common.util.concurrent.SettableFuture;
import static org.apache.hadoop.hdfs.qjournal.QJMTestUtil.writeOp;
public class TestQuorumJournalManagerUnit
private AsyncLogger mockLogger()
static <V> Stubber futureReturns(V value)
static Stubber futureThrows(Throwable t)
@Test
public void testAllLoggersStartOk() throws Exception
@Test
public void testQuorumOfLoggersStartOk() throws Exception
@Test
public void testQuorumOfLoggersFail() throws Exception
@Test
public void testQuorumOutputStreamReport() throws Exception
@Test
public void testWriteEdits() throws Exception
@Test
public void testWriteEditsOneSlow() throws Exception
private EditLogOutputStream createLogSegment() throws IOException
}
