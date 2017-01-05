package org.apache.hadoop.hdfs.web.resources;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_WEBHDFS_ACL_PERMISSION_PATTERN_DEFAULT;
import java.util.List;
import java.util.regex.Pattern;
import org.apache.hadoop.fs.permission.AclEntry;
import org.apache.commons.lang.StringUtils;
public class AclPermissionParam extends StringParam
