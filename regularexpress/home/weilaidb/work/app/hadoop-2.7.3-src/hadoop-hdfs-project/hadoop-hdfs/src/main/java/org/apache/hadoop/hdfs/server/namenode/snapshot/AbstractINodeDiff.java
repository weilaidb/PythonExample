package org.apache.hadoop.hdfs.server.namenode.snapshot;
import java.io.DataOutput;
import java.io.IOException;
import java.util.List;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockStoragePolicySuite;
import org.apache.hadoop.hdfs.server.namenode.INode;
import org.apache.hadoop.hdfs.server.namenode.INode.BlocksMapUpdateInfo;
import org.apache.hadoop.hdfs.server.namenode.INodeAttributes;
import org.apache.hadoop.hdfs.server.namenode.QuotaCounts;
import org.apache.hadoop.hdfs.server.namenode.snapshot.SnapshotFSImageFormat.ReferenceMap;
import com.google.common.base.Preconditions;
abstract class AbstractINodeDiff<N extends INode,
A extends INodeAttributes,
D extends AbstractINodeDiff<N, A, D>>
implements Comparable<Integer>
