package org.apache.hadoop;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.tools.DFSAdmin;
import org.apache.hadoop.ipc.RefreshHandler;
import org.apache.hadoop.ipc.RefreshRegistry;
import org.apache.hadoop.ipc.RefreshResponse;
import org.junit.Test;
import org.junit.Before;
import org.junit.After;
import org.junit.BeforeClass;
import org.junit.AfterClass;
import org.mockito.Mockito;
public class TestGenericRefresh
