package org.apache.hadoop.fs.permission;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.*;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
public class PermissionStatus implements Writable
