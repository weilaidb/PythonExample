package org.apache.hadoop.fs.shell;
import java.io.IOException;
import java.util.LinkedList;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.PathIsNotDirectoryException;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
@InterfaceStability.Unstable
class SnapshotCommands extends FsCommand
