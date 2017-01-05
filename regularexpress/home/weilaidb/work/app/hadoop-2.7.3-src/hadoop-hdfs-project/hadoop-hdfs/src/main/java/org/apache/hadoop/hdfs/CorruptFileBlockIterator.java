package org.apache.hadoop.hdfs;
import java.io.IOException;
import java.util.NoSuchElementException;
import org.apache.hadoop.hdfs.protocol.CorruptFileBlocks;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.RemoteIterator;
public class CorruptFileBlockIterator implements RemoteIterator<Path>
