package org.apache.hadoop.fs;
import java.io.IOException;
import java.util.List;
import java.util.NoSuchElementException;
public abstract class BatchedRemoteIterator<K, E> implements RemoteIterator<E>
