package org.apache.hadoop.fs.azure;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import org.apache.hadoop.fs.Syncable;
public class SyncableDataOutputStream extends DataOutputStream implements Syncable
