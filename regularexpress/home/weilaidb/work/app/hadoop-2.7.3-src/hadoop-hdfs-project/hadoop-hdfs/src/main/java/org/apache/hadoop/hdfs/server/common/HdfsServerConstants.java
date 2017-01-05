package org.apache.hadoop.hdfs.server.common;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.server.namenode.MetaRecoveryContext;
import com.google.common.base.Preconditions;
import org.apache.hadoop.util.StringUtils;
@InterfaceAudience.Private
public final class HdfsServerConstants
