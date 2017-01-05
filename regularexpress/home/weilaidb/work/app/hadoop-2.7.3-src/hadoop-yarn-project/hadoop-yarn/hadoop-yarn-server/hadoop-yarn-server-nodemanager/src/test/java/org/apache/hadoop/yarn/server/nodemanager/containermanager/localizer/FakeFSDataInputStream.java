package org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer;
import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;
import org.apache.hadoop.fs.PositionedReadable;
import org.apache.hadoop.fs.Seekable;
public class FakeFSDataInputStream
extends FilterInputStream implements Seekable, PositionedReadable
