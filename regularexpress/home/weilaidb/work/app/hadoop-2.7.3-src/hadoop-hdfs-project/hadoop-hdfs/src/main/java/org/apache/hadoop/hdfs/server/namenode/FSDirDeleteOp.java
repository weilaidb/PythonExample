package org.apache.hadoop.hdfs.server.namenode;
import org.apache.hadoop.fs.PathIsNotEmptyDirectoryException;
import org.apache.hadoop.fs.permission.FsAction;
import org.apache.hadoop.hdfs.server.namenode.INode.BlocksMapUpdateInfo;
import org.apache.hadoop.util.ChunkedArrayList;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import static org.apache.hadoop.hdfs.server.namenode.snapshot.Snapshot.CURRENT_STATE_ID;
import static org.apache.hadoop.util.Time.now;
class FSDirDeleteOp
