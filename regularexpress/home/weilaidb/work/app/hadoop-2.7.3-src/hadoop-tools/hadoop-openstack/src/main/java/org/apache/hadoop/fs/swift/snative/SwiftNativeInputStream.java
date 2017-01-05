package org.apache.hadoop.fs.swift.snative;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.fs.FSExceptionMessages;
import org.apache.hadoop.fs.FSInputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.swift.exceptions.SwiftConnectionClosedException;
import org.apache.hadoop.fs.swift.exceptions.SwiftException;
import org.apache.hadoop.fs.swift.http.HttpBodyContent;
import org.apache.hadoop.fs.swift.http.HttpInputStreamWithRelease;
import org.apache.hadoop.fs.swift.util.SwiftUtils;
import java.io.EOFException;
import java.io.IOException;
class SwiftNativeInputStream extends FSInputStream
