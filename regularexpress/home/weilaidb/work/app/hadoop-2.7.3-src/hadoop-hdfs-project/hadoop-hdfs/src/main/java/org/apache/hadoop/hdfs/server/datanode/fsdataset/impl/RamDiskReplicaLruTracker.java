package org.apache.hadoop.hdfs.server.datanode.fsdataset.impl;
import com.google.common.collect.TreeMultimap;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.util.Time;
import java.io.File;
import java.util.*;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class RamDiskReplicaLruTracker extends RamDiskReplicaTracker
