package org.apache.hadoop.fs.shell;
import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.LinkedList;
import java.util.TimeZone;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FileStatus;
@InterfaceAudience.Private
@InterfaceStability.Unstable
class Stat extends FsCommand
