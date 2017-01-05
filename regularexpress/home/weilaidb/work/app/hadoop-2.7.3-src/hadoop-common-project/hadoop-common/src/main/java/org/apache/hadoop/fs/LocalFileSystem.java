package org.apache.hadoop.fs;
import java.io.File;
import java.io.IOException;
import java.net.URI;
import java.util.Random;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class LocalFileSystem extends ChecksumFileSystem
