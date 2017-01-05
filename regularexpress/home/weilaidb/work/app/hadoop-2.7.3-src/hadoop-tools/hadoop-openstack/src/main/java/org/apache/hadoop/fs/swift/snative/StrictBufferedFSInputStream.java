package org.apache.hadoop.fs.swift.snative;
import org.apache.hadoop.fs.BufferedFSInputStream;
import org.apache.hadoop.fs.FSExceptionMessages;
import org.apache.hadoop.fs.FSInputStream;
import org.apache.hadoop.fs.swift.exceptions.SwiftConnectionClosedException;
import java.io.EOFException;
import java.io.IOException;
public class StrictBufferedFSInputStream extends BufferedFSInputStream
