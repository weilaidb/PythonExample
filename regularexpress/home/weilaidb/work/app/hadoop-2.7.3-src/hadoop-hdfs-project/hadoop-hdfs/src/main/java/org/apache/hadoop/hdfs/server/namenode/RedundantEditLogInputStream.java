package org.apache.hadoop.hdfs.server.namenode;
import java.io.IOException;
import java.util.Arrays;
import java.util.Collection;
import java.util.Comparator;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import org.apache.hadoop.io.IOUtils;
import com.google.common.base.Preconditions;
import com.google.common.primitives.Longs;
class RedundantEditLogInputStream extends EditLogInputStream
