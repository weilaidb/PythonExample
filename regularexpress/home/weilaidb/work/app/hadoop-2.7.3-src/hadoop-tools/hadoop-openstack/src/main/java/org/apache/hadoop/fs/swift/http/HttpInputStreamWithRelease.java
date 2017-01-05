package org.apache.hadoop.fs.swift.http;
import org.apache.commons.httpclient.HttpMethod;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.fs.swift.exceptions.SwiftConnectionClosedException;
import org.apache.hadoop.fs.swift.util.SwiftUtils;
import java.io.ByteArrayInputStream;
import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;
import java.net.URI;
public class HttpInputStreamWithRelease extends InputStream
