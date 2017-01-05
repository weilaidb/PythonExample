package org.apache.hadoop.hdfs.server.namenode;
import static org.apache.hadoop.hdfs.server.namenode.NNStorage.getFinalizedEditsFileName;
import static org.apache.hadoop.hdfs.server.namenode.NNStorage.getImageFileName;
import static org.apache.hadoop.hdfs.server.namenode.NNStorage.getInProgressEditsFileName;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertSame;
import static org.junit.Assert.assertTrue;
import java.io.File;
import java.io.IOException;
import org.apache.hadoop.hdfs.server.common.Storage.StorageDirectory;
import org.apache.hadoop.hdfs.server.namenode.FSImageStorageInspector.FSImageFile;
import org.apache.hadoop.hdfs.server.namenode.NNStorage.NameNodeDirType;
import org.junit.Test;
public class TestFSImageStorageInspector
