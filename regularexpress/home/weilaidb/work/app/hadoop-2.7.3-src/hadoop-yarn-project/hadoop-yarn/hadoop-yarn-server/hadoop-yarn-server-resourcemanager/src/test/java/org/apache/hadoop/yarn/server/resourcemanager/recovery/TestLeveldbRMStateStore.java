package org.apache.hadoop.yarn.server.resourcemanager.recovery;
import static org.mockito.Mockito.isNull;
import static org.mockito.Mockito.mock;
import static org.mockito.Mockito.timeout;
import static org.mockito.Mockito.verify;
import java.io.File;
import java.io.IOException;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.server.records.Version;
import org.apache.hadoop.yarn.server.resourcemanager.rmapp.RMApp;
import org.iq80.leveldb.DB;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
public class TestLeveldbRMStateStore extends RMStateStoreTestBase
