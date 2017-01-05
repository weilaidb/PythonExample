package org.apache.hadoop.hdfs.server.datanode.fsdataset;
import java.io.IOException;
import java.util.List;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.util.DiskChecker.DiskOutOfSpaceException;
public class RoundRobinVolumeChoosingPolicy<V extends FsVolumeSpi>
implements VolumeChoosingPolicy<V>
