package org.apache.hadoop.fs.shell;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.PathIsDirectoryException;
import java.io.IOException;
import java.util.LinkedList;
import java.util.List;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class Truncate extends FsCommand
