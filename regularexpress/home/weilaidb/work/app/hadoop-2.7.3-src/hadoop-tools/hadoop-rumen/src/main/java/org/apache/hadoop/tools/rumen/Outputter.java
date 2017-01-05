package org.apache.hadoop.tools.rumen;
import java.io.Closeable;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
public interface Outputter<T> extends Closeable
