package org.apache.hadoop.fs.shell.find;
import java.io.IOException;
import java.util.Deque;
import java.util.LinkedList;
import java.util.List;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.shell.PathData;
public abstract class BaseExpression implements Expression, Configurable
