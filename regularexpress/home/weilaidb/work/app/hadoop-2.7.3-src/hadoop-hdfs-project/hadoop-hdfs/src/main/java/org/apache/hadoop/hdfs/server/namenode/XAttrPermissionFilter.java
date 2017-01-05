package org.apache.hadoop.hdfs.server.namenode;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.XAttr;
import org.apache.hadoop.hdfs.XAttrHelper;
import org.apache.hadoop.security.AccessControlException;
import com.google.common.collect.Lists;
import com.google.common.base.Preconditions;
import static org.apache.hadoop.hdfs.server.common.HdfsServerConstants.SECURITY_XATTR_UNREADABLE_BY_SUPERUSER;
@InterfaceAudience.Private
public class XAttrPermissionFilter
