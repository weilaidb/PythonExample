package org.apache.hadoop.hdfs.qjournal.client;
import java.io.IOException;
import org.apache.hadoop.hdfs.server.namenode.EditLogOutputStream;
import org.apache.hadoop.hdfs.server.namenode.EditsDoubleBuffer;
import org.apache.hadoop.hdfs.server.namenode.FSEditLogOp;
import org.apache.hadoop.io.DataOutputBuffer;
class QuorumOutputStream extends EditLogOutputStream
