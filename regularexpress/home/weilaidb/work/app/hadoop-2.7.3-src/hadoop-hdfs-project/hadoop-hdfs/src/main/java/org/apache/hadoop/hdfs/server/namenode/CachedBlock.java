package org.apache.hadoop.hdfs.server.namenode;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.server.blockmanagement.DatanodeDescriptor;
import org.apache.hadoop.hdfs.server.blockmanagement.DatanodeDescriptor.CachedBlocksList;
import org.apache.hadoop.hdfs.server.blockmanagement.DatanodeDescriptor.CachedBlocksList.Type;
import org.apache.hadoop.util.IntrusiveCollection;
import org.apache.hadoop.util.LightWeightGSet;
import org.apache.hadoop.util.IntrusiveCollection.Element;
import org.apache.hadoop.util.LightWeightGSet.LinkedElement;
@InterfaceAudience.LimitedPrivate()
public final class CachedBlock implements Element,
LightWeightGSet.LinkedElement
