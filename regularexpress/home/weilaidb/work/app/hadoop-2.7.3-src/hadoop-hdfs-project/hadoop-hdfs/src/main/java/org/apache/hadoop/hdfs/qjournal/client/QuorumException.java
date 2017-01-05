package org.apache.hadoop.hdfs.qjournal.client;
import java.io.IOException;
import java.util.Map;
import org.apache.hadoop.util.StringUtils;
import com.google.common.base.Joiner;
import com.google.common.base.Preconditions;
class QuorumException extends IOException
