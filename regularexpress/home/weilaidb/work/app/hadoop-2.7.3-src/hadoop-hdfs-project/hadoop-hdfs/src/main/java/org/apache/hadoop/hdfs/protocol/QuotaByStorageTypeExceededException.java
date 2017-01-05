package org.apache.hadoop.hdfs.protocol;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.StorageType;
import static org.apache.hadoop.util.StringUtils.TraditionalBinaryPrefix.long2String;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class QuotaByStorageTypeExceededException extends QuotaExceededException
