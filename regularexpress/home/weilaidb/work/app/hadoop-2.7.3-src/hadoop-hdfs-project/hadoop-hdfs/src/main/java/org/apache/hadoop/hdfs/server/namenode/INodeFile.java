package org.apache.hadoop.hdfs.server.namenode;
import static org.apache.hadoop.hdfs.server.blockmanagement.BlockStoragePolicySuite.ID_UNSPECIFIED;
import static org.apache.hadoop.hdfs.server.namenode.snapshot.Snapshot.CURRENT_STATE_ID;
import static org.apache.hadoop.hdfs.server.namenode.snapshot.Snapshot.NO_SNAPSHOT_ID;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.permission.PermissionStatus;
import org.apache.hadoop.fs.StorageType;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.protocol.BlockStoragePolicy;
import org.apache.hadoop.hdfs.protocol.QuotaExceededException;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockCollection;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockInfoContiguous;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockInfoContiguousUnderConstruction;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockStoragePolicySuite;
import org.apache.hadoop.hdfs.server.blockmanagement.DatanodeStorageInfo;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.BlockUCState;
import org.apache.hadoop.hdfs.server.namenode.snapshot.FileDiff;
import org.apache.hadoop.hdfs.server.namenode.snapshot.FileDiffList;
import org.apache.hadoop.hdfs.server.namenode.snapshot.FileWithSnapshotFeature;
import org.apache.hadoop.hdfs.server.namenode.snapshot.Snapshot;
import org.apache.hadoop.hdfs.util.LongBitFormat;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public class INodeFile extends INodeWithAdditionalFields
implements INodeFileAttributes, BlockCollection
