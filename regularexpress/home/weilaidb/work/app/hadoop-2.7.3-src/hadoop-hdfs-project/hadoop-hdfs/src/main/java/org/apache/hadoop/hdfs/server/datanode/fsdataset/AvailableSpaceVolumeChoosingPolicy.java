package org.apache.hadoop.hdfs.server.datanode.fsdataset;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_AVAILABLE_SPACE_VOLUME_CHOOSING_POLICY_BALANCED_SPACE_THRESHOLD_DEFAULT;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_AVAILABLE_SPACE_VOLUME_CHOOSING_POLICY_BALANCED_SPACE_THRESHOLD_KEY;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_AVAILABLE_SPACE_VOLUME_CHOOSING_POLICY_BALANCED_SPACE_PREFERENCE_FRACTION_DEFAULT;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_AVAILABLE_SPACE_VOLUME_CHOOSING_POLICY_BALANCED_SPACE_PREFERENCE_FRACTION_KEY;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.util.DiskChecker.DiskOutOfSpaceException;
public class AvailableSpaceVolumeChoosingPolicy<V extends FsVolumeSpi>
implements VolumeChoosingPolicy<V>, Configurable
