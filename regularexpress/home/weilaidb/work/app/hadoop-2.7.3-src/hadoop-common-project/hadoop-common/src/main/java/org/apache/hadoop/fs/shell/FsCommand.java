package org.apache.hadoop.fs.shell;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FsShellPermissions;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.shell.find.Find;
@InterfaceAudience.Private
@InterfaceStability.Evolving
abstract public class FsCommand extends Command
