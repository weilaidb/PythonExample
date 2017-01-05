package org.apache.hadoop.hdfs.server.namenode;
import static org.apache.hadoop.fs.permission.AclEntryScope.*;
import static org.apache.hadoop.fs.permission.AclEntryType.*;
import static org.apache.hadoop.fs.permission.FsAction.*;
import static org.apache.hadoop.hdfs.server.namenode.AclTestHelpers.*;
import static org.apache.hadoop.hdfs.server.namenode.AclTransformation.*;
import static org.junit.Assert.*;
import java.util.List;
import com.google.common.collect.ImmutableList;
import com.google.common.collect.Lists;
import org.junit.Test;
import org.apache.hadoop.fs.permission.AclEntry;
import org.apache.hadoop.fs.permission.AclEntryScope;
import org.apache.hadoop.fs.permission.AclEntryType;
import org.apache.hadoop.fs.permission.FsAction;
import org.apache.hadoop.hdfs.protocol.AclException;
import org.apache.hadoop.hdfs.server.namenode.AclTransformation;
public class TestAclTransformation
