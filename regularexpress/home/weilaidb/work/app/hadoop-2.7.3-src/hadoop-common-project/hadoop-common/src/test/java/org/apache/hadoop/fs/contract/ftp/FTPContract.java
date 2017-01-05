package org.apache.hadoop.fs.contract.ftp;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.contract.AbstractBondedFSContract;
import org.junit.Assert;
import java.net.URI;
import static org.junit.Assert.assertNotNull;
public class FTPContract extends AbstractBondedFSContract
