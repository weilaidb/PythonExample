package org.apache.hadoop.fs.shell;
import java.io.IOException;
import java.util.LinkedList;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.BlockLocation;
import org.apache.hadoop.fs.PathIOException;
@InterfaceAudience.Private
@InterfaceStability.Unstable
class SetReplication extends FsCommand
