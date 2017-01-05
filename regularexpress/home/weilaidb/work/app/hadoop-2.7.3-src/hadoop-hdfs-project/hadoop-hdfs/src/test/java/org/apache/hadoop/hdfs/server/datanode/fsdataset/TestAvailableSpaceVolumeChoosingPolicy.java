package org.apache.hadoop.hdfs.server.datanode.fsdataset;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_AVAILABLE_SPACE_VOLUME_CHOOSING_POLICY_BALANCED_SPACE_THRESHOLD_KEY;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_AVAILABLE_SPACE_VOLUME_CHOOSING_POLICY_BALANCED_SPACE_PREFERENCE_FRACTION_KEY;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.test.GenericTestUtils;
import org.apache.hadoop.util.ReflectionUtils;
import org.junit.Assert;
import org.junit.Test;
import org.mockito.Mockito;
public class TestAvailableSpaceVolumeChoosingPolicy
