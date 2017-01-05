package org.apache.hadoop.hdfs.server.datanode.fsdataset;
import java.io.Closeable;
import java.io.FileOutputStream;
import java.io.OutputStream;
import java.io.IOException;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.util.DataChecksum;
public class ReplicaOutputStreams implements Closeable
