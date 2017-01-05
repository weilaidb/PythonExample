package org.apache.hadoop.hdfs.server.datanode.fsdataset;
import java.io.IOException;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
@InterfaceAudience.Private
public interface VolumeChoosingPolicy<V extends FsVolumeSpi>
