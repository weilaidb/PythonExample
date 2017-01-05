package org.apache.hadoop.hdfs.server.namenode;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import org.apache.hadoop.fs.StorageType;
import org.apache.hadoop.hdfs.protocol.BlockStoragePolicy;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockStoragePolicySuite;
import org.apache.hadoop.hdfs.server.namenode.StoragePolicySummary.StorageTypeAllocation;
import org.junit.Assert;
import org.junit.Test;
public class TestStoragePolicySummary
