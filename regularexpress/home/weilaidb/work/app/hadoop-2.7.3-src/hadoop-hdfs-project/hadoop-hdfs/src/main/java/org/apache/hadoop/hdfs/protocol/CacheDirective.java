package org.apache.hadoop.hdfs.protocol;
import static com.google.common.base.Preconditions.checkNotNull;
import java.util.Date;
import org.apache.commons.lang.builder.HashCodeBuilder;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.server.namenode.CachePool;
import org.apache.hadoop.util.IntrusiveCollection;
import org.apache.hadoop.util.IntrusiveCollection.Element;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public final class CacheDirective implements IntrusiveCollection.Element ;
