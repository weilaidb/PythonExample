package org.apache.hadoop.hdfs.server.namenode.snapshot;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockStoragePolicySuite;
import org.apache.hadoop.hdfs.server.namenode.INode;
import org.apache.hadoop.hdfs.server.namenode.INode.BlocksMapUpdateInfo;
import org.apache.hadoop.hdfs.server.namenode.INodeAttributes;
import org.apache.hadoop.hdfs.server.namenode.QuotaCounts;
abstract class AbstractINodeDiffList<N extends INode,
A extends INodeAttributes,
D extends AbstractINodeDiff<N, A, D>>
implements Iterable<D>
