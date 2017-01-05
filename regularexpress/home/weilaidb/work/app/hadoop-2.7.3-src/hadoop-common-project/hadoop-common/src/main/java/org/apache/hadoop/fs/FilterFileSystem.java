package org.apache.hadoop.fs;
import java.io.*;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.EnumSet;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.permission.AclEntry;
import org.apache.hadoop.fs.permission.AclStatus;
import org.apache.hadoop.fs.permission.FsAction;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.fs.Options.ChecksumOpt;
import org.apache.hadoop.security.AccessControlException;
import org.apache.hadoop.util.Progressable;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class FilterFileSystem extends FileSystem
