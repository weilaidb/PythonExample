package org.apache.hadoop.hdfs.server.datanode;
import java.io.DataOutputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.concurrent.TimeUnit;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Preconditions;
import com.google.common.cache.Cache;
import com.google.common.cache.CacheBuilder;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.protocol.ExtendedBlock;
import org.apache.hadoop.hdfs.server.datanode.BlockScanner.Conf;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.FsVolumeReference;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.FsVolumeSpi.BlockIterator;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.FsVolumeSpi;
import org.apache.hadoop.hdfs.util.DataTransferThrottler;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.util.Time;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
public class VolumeScanner extends Thread
