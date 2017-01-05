package org.apache.hadoop.hdfs.server.blockmanagement;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Random;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.hdfs.protocol.DatanodeID;
import org.apache.hadoop.hdfs.server.blockmanagement.DatanodeDescriptor;
import org.apache.hadoop.hdfs.server.blockmanagement.DatanodeDescriptor.CachedBlocksList;
import org.apache.hadoop.hdfs.server.namenode.CachedBlock;
import org.junit.Assert;
import org.junit.Test;
public class TestCachedBlocksList
