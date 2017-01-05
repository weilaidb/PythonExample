package org.apache.hadoop.fs;
import java.io.*;
import java.io.DataOutputStream;
import java.io.FilterOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class FSDataOutputStream extends DataOutputStream
implements Syncable, CanSetDropBehind
