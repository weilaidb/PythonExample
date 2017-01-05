package org.apache.hadoop.mapreduce.jobhistory;
import static org.junit.Assert.assertTrue;
import static org.mockito.Matchers.any;
import static org.mockito.Mockito.mock;
import static org.mockito.Mockito.spy;
import static org.mockito.Mockito.times;
import static org.mockito.Mockito.verify;
import static org.mockito.Mockito.when;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.HashMap;
import org.junit.Assert;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeysPublic;
import org.apache.hadoop.fs.FileContext;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.LocalFileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.mapreduce.CounterGroup;
import org.apache.hadoop.mapreduce.Counters;
import org.apache.hadoop.mapreduce.JobACL;
import org.apache.hadoop.mapreduce.JobID;
import org.apache.hadoop.mapreduce.MRJobConfig;
import org.apache.hadoop.mapreduce.TaskAttemptID;
import org.apache.hadoop.mapreduce.TaskID;
import org.apache.hadoop.mapreduce.TaskType;
import org.apache.hadoop.mapreduce.TypeConverter;
import org.apache.hadoop.mapreduce.v2.api.records.JobId;
import org.apache.hadoop.mapreduce.v2.app.AppContext;
import org.apache.hadoop.mapreduce.v2.app.job.Job;
import org.apache.hadoop.mapreduce.v2.app.job.JobStateInternal;
import org.apache.hadoop.mapreduce.v2.jobhistory.JHAdminConfig;
import org.apache.hadoop.mapreduce.v2.jobhistory.JobHistoryUtils;
import org.apache.hadoop.mapreduce.v2.util.MRBuilderUtils;
import org.apache.hadoop.security.authorize.AccessControlList;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.timeline.TimelineEntities;
import org.apache.hadoop.yarn.api.records.timeline.TimelineEntity;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.exceptions.YarnRuntimeException;
import org.junit.After;
import org.junit.AfterClass;
import static org.junit.Assert.assertFalse;
import org.junit.BeforeClass;
import org.apache.hadoop.yarn.server.MiniYARNCluster;
import org.apache.hadoop.yarn.server.timeline.TimelineStore;
import org.codehaus.jackson.JsonNode;
import org.codehaus.jackson.map.ObjectMapper;
import org.junit.Test;
import org.mockito.Mockito;
public class TestJobHistoryEventHandler {
private static final Log LOG = LogFactory
.getLog(TestJobHistoryEventHandler.class);
private static MiniDFSCluster dfsCluster = null;
private static String coreSitePath;
@BeforeClass
public static void setUpClass() throws Exception
@AfterClass
public static void cleanUpClass() throws Exception
@After
public void cleanTest() throws Exception
@Test (timeout=50000)
public void testFirstFlushOnCompletionEvent() throws Exception
@Test (timeout=50000)
public void testMaxUnflushedCompletionEvents() throws Exception
@Test (timeout=50000)
public void testUnflushedTimer() throws Exception
@Test (timeout=50000)
public void testBatchedFlushJobEndMultiplier() throws Exception
@Test (timeout=50000)
public void testProcessDoneFilesOnLastAMRetry() throws Exception
@Test (timeout=50000)
public void testProcessDoneFilesNotLastAMRetry() throws Exception
@Test (timeout=50000)
public void testDefaultFsIsUsedForHistory() throws Exception {
Configuration conf = new Configuration();
conf.set(CommonConfigurationKeysPublic.FS_DEFAULT_NAME_KEY,
dfsCluster.getURI().toString());
FileOutputStream os = new FileOutputStream(coreSitePath);
conf.writeXml(os);
os.close();
conf.set(CommonConfigurationKeysPublic.FS_DEFAULT_NAME_KEY,
"file:
TestParams t = new TestParams();
conf.set(MRJobConfig.MR_AM_STAGING_DIR, t.dfsWorkDir);
JHEvenHandlerForTest realJheh =
new JHEvenHandlerForTest(t.mockAppContext, 0, false);
JHEvenHandlerForTest jheh = spy(realJheh);
jheh.init(conf);
try
class JHEvenHandlerForTest extends JobHistoryEventHandler
class JHEventHandlerForSigtermTest extends JobHistoryEventHandler
