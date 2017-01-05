package org.apache.hadoop.hdfs.server.namenode;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.concurrent.CountDownLatch;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.server.common.Storage.StorageDirectory;
import org.apache.hadoop.hdfs.util.Canceler;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public class SaveNamespaceContext
