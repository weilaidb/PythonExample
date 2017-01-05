package org.apache.hadoop.fs.shell;
import java.io.IOException;
import java.util.Arrays;
import java.util.LinkedList;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.ContentSummary;
import org.apache.hadoop.fs.FsShell;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class Count extends FsCommand
