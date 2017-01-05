package org.apache.hadoop.fs;
import java.io.*;
import java.util.*;
import org.apache.commons.logging.*;
import org.apache.hadoop.util.*;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.util.DiskChecker.DiskErrorException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
public class LocalDirAllocator
