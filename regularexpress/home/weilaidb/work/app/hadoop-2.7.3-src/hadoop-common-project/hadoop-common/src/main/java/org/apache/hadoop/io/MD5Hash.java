package org.apache.hadoop.io;
import java.io.IOException;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.InputStream;
import java.util.Arrays;
import java.security.*;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class MD5Hash implements WritableComparable<MD5Hash>
