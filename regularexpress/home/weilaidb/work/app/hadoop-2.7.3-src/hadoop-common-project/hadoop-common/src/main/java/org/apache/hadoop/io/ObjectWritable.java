package org.apache.hadoop.io;
import java.lang.reflect.Array;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.io.*;
import java.util.*;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.*;
import org.apache.hadoop.util.ProtoUtil;
import com.google.protobuf.Message;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class ObjectWritable implements Writable, Configurable
