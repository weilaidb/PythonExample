package org.apache.hadoop.fs.shell;
import java.io.IOException;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import com.google.common.collect.Lists;
import org.apache.hadoop.HadoopIllegalArgumentException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.permission.AclEntry;
import org.apache.hadoop.fs.permission.AclEntryScope;
import org.apache.hadoop.fs.permission.AclEntryType;
import org.apache.hadoop.fs.permission.AclStatus;
import org.apache.hadoop.fs.permission.AclUtil;
import org.apache.hadoop.fs.permission.FsAction;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.fs.permission.ScopedAclEntries;
@InterfaceAudience.Private
@InterfaceStability.Evolving
class AclCommands extends FsCommand
