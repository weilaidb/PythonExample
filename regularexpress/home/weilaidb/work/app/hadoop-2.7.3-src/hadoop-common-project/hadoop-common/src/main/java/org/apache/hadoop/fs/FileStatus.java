package org.apache.hadoop.fs;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.Writable;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class FileStatus implements Writable, Comparable
