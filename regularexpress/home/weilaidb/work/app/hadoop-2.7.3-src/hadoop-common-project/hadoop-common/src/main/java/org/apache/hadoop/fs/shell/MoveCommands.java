package org.apache.hadoop.fs.shell;
import java.io.IOException;
import java.util.LinkedList;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.PathIOException;
import org.apache.hadoop.fs.PathExistsException;
import org.apache.hadoop.fs.shell.CopyCommands.CopyFromLocal;
@InterfaceAudience.Private
@InterfaceStability.Evolving
class MoveCommands
