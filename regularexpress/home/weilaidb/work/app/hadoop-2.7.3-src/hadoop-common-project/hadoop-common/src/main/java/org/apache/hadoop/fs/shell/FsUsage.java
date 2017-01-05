package org.apache.hadoop.fs.shell;
import java.io.IOException;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FsStatus;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.util.StringUtils;
@InterfaceAudience.Private
@InterfaceStability.Evolving
class FsUsage extends FsCommand
