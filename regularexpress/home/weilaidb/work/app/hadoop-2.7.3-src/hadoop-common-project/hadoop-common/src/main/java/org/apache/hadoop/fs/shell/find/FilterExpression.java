package org.apache.hadoop.fs.shell.find;
import java.io.IOException;
import java.util.Deque;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.shell.PathData;
public abstract class FilterExpression implements Expression, Configurable
