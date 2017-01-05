package org.apache.hadoop.hdfs.protocol;
import java.io.IOException;
import javax.annotation.Nullable;
import org.apache.commons.lang.builder.EqualsBuilder;
import org.apache.commons.lang.builder.HashCodeBuilder;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.InvalidRequestException;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.hdfs.protocol.CacheDirectiveInfo.Expiration;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class CachePoolInfo
