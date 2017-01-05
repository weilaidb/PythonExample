package org.apache.hadoop.hdfs.server.datanode;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_BLOCK_SCANNER_VOLUME_BYTES_PER_SECOND;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_BLOCK_SCANNER_VOLUME_BYTES_PER_SECOND_DEFAULT;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_SCAN_PERIOD_HOURS_KEY;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_SCAN_PERIOD_HOURS_DEFAULT;
import java.io.IOException;
import java.util.Map.Entry;
import java.util.TreeMap;
import java.util.concurrent.TimeUnit;
import com.google.common.annotations.VisibleForTesting;
import org.apache.hadoop.hdfs.protocol.ExtendedBlock;
import org.apache.hadoop.hdfs.server.datanode.VolumeScanner.ScanResultHandler;
import com.google.common.base.Preconditions;
import com.google.common.util.concurrent.Uninterruptibles;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.FsVolumeReference;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.FsVolumeSpi;
import org.apache.hadoop.io.IOUtils;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
@InterfaceAudience.Private
public class BlockScanner
