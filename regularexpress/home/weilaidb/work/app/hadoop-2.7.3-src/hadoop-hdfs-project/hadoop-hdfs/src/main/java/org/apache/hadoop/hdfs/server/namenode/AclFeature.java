package org.apache.hadoop.hdfs.server.namenode;
import java.util.Arrays;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.permission.AclEntry;
import org.apache.hadoop.hdfs.util.ReferenceCountMap.ReferenceCounter;
import com.google.common.base.Preconditions;
import com.google.common.collect.ImmutableList;
@InterfaceAudience.Private
public class AclFeature implements INode.Feature, ReferenceCounter
