package org.apache.hadoop.hdfs.server.namenode;
import java.util.List;
import java.util.Map;
import com.google.common.collect.ImmutableList;
import com.google.common.collect.Lists;
import com.google.common.collect.Maps;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.XAttr;
import org.apache.hadoop.hdfs.protocol.QuotaExceededException;
@InterfaceAudience.Private
public class XAttrStorage
