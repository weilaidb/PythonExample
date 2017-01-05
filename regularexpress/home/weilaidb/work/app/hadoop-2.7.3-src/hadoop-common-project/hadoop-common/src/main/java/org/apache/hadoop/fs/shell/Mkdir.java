package org.apache.hadoop.fs.shell;
import java.io.IOException;
import java.util.LinkedList;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.PathExistsException;
import org.apache.hadoop.fs.PathIOException;
import org.apache.hadoop.fs.PathIsNotDirectoryException;
import org.apache.hadoop.fs.PathNotFoundException;
@InterfaceAudience.Private
@InterfaceStability.Unstable
class Mkdir extends FsCommand
