package org.apache.hadoop.fs.shell;
import java.io.IOException;
import java.util.LinkedList;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.fs.PathIsDirectoryException;
import org.apache.hadoop.io.IOUtils;
@InterfaceAudience.Private
@InterfaceStability.Unstable
class Tail extends FsCommand
