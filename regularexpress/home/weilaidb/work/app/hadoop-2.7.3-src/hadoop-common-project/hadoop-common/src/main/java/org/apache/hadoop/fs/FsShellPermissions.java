package org.apache.hadoop.fs;
import java.io.IOException;
import java.util.LinkedList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.apache.commons.logging.Log;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.permission.ChmodParser;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.fs.shell.CommandFactory;
import org.apache.hadoop.fs.shell.CommandFormat;
import org.apache.hadoop.fs.shell.FsCommand;
import org.apache.hadoop.fs.shell.PathData;
import org.apache.hadoop.util.Shell;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class FsShellPermissions extends FsCommand
