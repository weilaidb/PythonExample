package org.apache.hadoop.hdfs;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.HadoopIllegalArgumentException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.XAttr;
import org.apache.hadoop.fs.XAttr.NameSpace;
import org.apache.hadoop.util.StringUtils;
import com.google.common.base.Preconditions;
import com.google.common.collect.Lists;
import com.google.common.collect.Maps;
@InterfaceAudience.Private
public class XAttrHelper
