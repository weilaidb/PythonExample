package org.apache.hadoop.hdfs.protocol;
import java.util.Arrays;
import java.util.EnumSet;
import java.util.LinkedList;
import java.util.List;
import com.google.common.annotations.VisibleForTesting;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.StorageType;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
@InterfaceAudience.Private
public class BlockStoragePolicy
