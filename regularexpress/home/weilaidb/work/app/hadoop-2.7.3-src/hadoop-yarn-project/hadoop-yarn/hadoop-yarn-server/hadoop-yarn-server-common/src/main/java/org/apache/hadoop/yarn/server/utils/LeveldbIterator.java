package org.apache.hadoop.yarn.server.utils;
import java.io.Closeable;
import java.io.IOException;
import java.util.Iterator;
import java.util.Map;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.iq80.leveldb.DB;
import org.iq80.leveldb.DBException;
import org.iq80.leveldb.DBIterator;
import org.iq80.leveldb.ReadOptions;
@Public
@Evolving
public class LeveldbIterator implements Iterator<Map.Entry<byte[], byte[]>>,
Closeable
