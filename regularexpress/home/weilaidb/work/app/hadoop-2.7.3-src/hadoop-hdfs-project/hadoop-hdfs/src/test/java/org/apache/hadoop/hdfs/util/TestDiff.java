package org.apache.hadoop.hdfs.util;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.fs.permission.PermissionStatus;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.server.namenode.INode;
import org.apache.hadoop.hdfs.server.namenode.INodeDirectory;
import org.apache.hadoop.hdfs.util.Diff;
import org.apache.hadoop.hdfs.util.Diff.Container;
import org.apache.hadoop.hdfs.util.Diff.UndoInfo;
import org.junit.Assert;
import org.junit.Test;
public class TestDiff
