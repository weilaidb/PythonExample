package org.apache.hadoop.hdfs.server.blockmanagement;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import com.google.common.annotations.VisibleForTesting;
import org.apache.hadoop.fs.StorageType;
import org.apache.hadoop.hdfs.protocol.DatanodeInfo;
import org.apache.hadoop.hdfs.server.protocol.DatanodeStorage;
import org.apache.hadoop.hdfs.server.protocol.DatanodeStorage.State;
import org.apache.hadoop.hdfs.server.protocol.StorageReport;
public class DatanodeStorageInfo
