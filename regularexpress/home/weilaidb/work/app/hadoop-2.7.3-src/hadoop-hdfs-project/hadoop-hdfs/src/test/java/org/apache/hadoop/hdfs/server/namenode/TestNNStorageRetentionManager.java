package org.apache.hadoop.hdfs.server.namenode;
import static org.apache.hadoop.hdfs.server.namenode.NNStorage.getFinalizedEditsFileName;
import static org.apache.hadoop.hdfs.server.namenode.NNStorage.getImageFileName;
import static org.apache.hadoop.hdfs.server.namenode.NNStorage.getInProgressEditsFileName;
import java.io.File;
import java.io.IOException;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import java.util.Set;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.server.common.Storage.StorageDirectory;
import org.apache.hadoop.hdfs.server.namenode.FSImageStorageInspector.FSImageFile;
import org.apache.hadoop.hdfs.server.namenode.FileJournalManager.EditLogFile;
import org.apache.hadoop.hdfs.server.namenode.NNStorage.NameNodeDirType;
import org.apache.hadoop.hdfs.server.namenode.NNStorage.NameNodeFile;
import org.apache.hadoop.hdfs.server.namenode.NNStorageRetentionManager.StoragePurger;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import org.mockito.ArgumentCaptor;
import org.mockito.Mockito;
import org.mockito.invocation.InvocationOnMock;
import org.mockito.stubbing.Answer;
import com.google.common.base.Joiner;
import com.google.common.collect.Lists;
import com.google.common.collect.Maps;
import com.google.common.collect.Sets;
public class TestNNStorageRetentionManager
